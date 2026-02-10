module fpu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 1
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output reg [DATA_WIDTH-1:0] o_data,
    output reg                  o_valid
);

   
    reg         sign_a, sign_b;
    reg [7:0]   exp_a, exp_b;
    reg [23:0]  mant_a, mant_b;

    reg         op_sign_a, op_sign_b;
    reg [7:0]   op_exp_a, op_exp_b;
    reg [23:0]  op_mant_a, op_mant_b;
    reg         op_sub; 

    reg [7:0]   exp_diff;
    reg [49:0]  mant_b_shifted; 
    reg [26:0]  aligned_mant_a; 
    reg [26:0]  aligned_mant_b;
    reg         sticky_bit;

    reg [27:0]  add_sum;        // 1 extra bit for carry/overflow
    reg [47:0]  mult_prod;
    
    reg         norm_sign;
    reg [7:0]   norm_exp;
    reg [49:0]  temp_mant;      
    reg [23:0]  norm_mant;     
    reg         G, R, S;        
    reg [4:0]   lzd_shift;     

    reg         round_up;
    reg [23:0]  rounded_mant;
    reg [7:0]   final_exp;

    reg [31:0]  next_data;

    
    always @(*) begin
        sign_a = i_data_a[31];
        sign_b = i_data_b[31];
        exp_a  = i_data_a[30:23];
        exp_b  = i_data_b[30:23];
        mant_a = {1'b1, i_data_a[22:0]};
        mant_b = {1'b1, i_data_b[22:0]};

        next_data = 0;
        
       
        if (i_inst == 1'b0) begin
            if ({exp_a, mant_a} >= {exp_b, mant_b}) begin
                op_sign_a = sign_a; op_sign_b = sign_b;
                op_exp_a  = exp_a;  op_exp_b  = exp_b;
                op_mant_a = mant_a; op_mant_b = mant_b;
            end else begin
                op_sign_a = sign_b; op_sign_b = sign_a;
                op_exp_a  = exp_b;  op_exp_b  = exp_a;
                op_mant_a = mant_b; op_mant_b = mant_a;
            end

            op_sub = op_sign_a ^ op_sign_b;
            norm_sign = op_sign_a; 
            exp_diff = op_exp_a - op_exp_b;
            
            mant_b_shifted = {op_mant_b, 26'd0} >> exp_diff;
            
            sticky_bit = |mant_b_shifted[23:0];
            aligned_mant_b = {mant_b_shifted[49:26], sticky_bit};
            
            aligned_mant_a = {op_mant_a, 3'b000};

            if (op_sub) begin
                add_sum = aligned_mant_a - aligned_mant_b; 
            end else begin
                add_sum = aligned_mant_a + aligned_mant_b;
            end

            if (add_sum[27]) begin
                norm_mant = add_sum[27:4]; // New Mantissa
                G = add_sum[3];
                R = add_sum[2];
                S = add_sum[1] | add_sum[0]; // Accumulate previous sticky info
                norm_exp = op_exp_a + 1;
            end else begin
                lzd_shift = 0;
                casez (add_sum[26:0])
                    27'b1??_????_????_????_????_????_????: lzd_shift = 0;
                    27'b01?_????_????_????_????_????_????: lzd_shift = 1;
                    27'b001_????_????_????_????_????_????: lzd_shift = 2;
                    27'b000_1???_????_????_????_????_????: lzd_shift = 3;
                    27'b000_01??_????_????_????_????_????: lzd_shift = 4;
                    27'b000_001?_????_????_????_????_????: lzd_shift = 5;
                    27'b000_0001_????_????_????_????_????: lzd_shift = 6;
                    27'b000_0000_1???_????_????_????_????: lzd_shift = 7;
                    27'b000_0000_01??_????_????_????_????: lzd_shift = 8;
                    27'b000_0000_001?_????_????_????_????: lzd_shift = 9;
                    27'b000_0000_0001_????_????_????_????: lzd_shift = 10;
                    27'b000_0000_0000_1???_????_????_????: lzd_shift = 11;
                    27'b000_0000_0000_01??_????_????_????: lzd_shift = 12;
                    27'b000_0000_0000_001?_????_????_????: lzd_shift = 13;
                    27'b000_0000_0000_0001_????_????_????: lzd_shift = 14;
                    27'b000_0000_0000_0000_1???_????_????: lzd_shift = 15;
                    27'b000_0000_0000_0000_01??_????_????: lzd_shift = 16;
                    27'b000_0000_0000_0000_001?_????_????: lzd_shift = 17;
                    27'b000_0000_0000_0000_0001_????_????: lzd_shift = 18;
                    27'b000_0000_0000_0000_0000_1???_????: lzd_shift = 19;
                    27'b000_0000_0000_0000_0000_01??_????: lzd_shift = 20;
                    27'b000_0000_0000_0000_0000_001?_????: lzd_shift = 21;
                    27'b000_0000_0000_0000_0000_0001_????: lzd_shift = 22;
                    27'b000_0000_0000_0000_0000_0000_1???: lzd_shift = 23;
                    27'b000_0000_0000_0000_0000_0000_01??: lzd_shift = 24;
                    27'b000_0000_0000_0000_0000_0000_001?: lzd_shift = 25;
                    27'b000_0000_0000_0000_0000_0000_0001: lzd_shift = 26;
                    default: lzd_shift = 27;
                endcase

                temp_mant = {add_sum[26:0], 23'd0} << lzd_shift;
                
                norm_mant = temp_mant[49:26];
                G = temp_mant[25];
                R = temp_mant[24];
                S = |temp_mant[23:0]; 
                
                norm_exp = op_exp_a - lzd_shift;
                
                if (add_sum == 0) begin
                    norm_exp = 0;
                    norm_mant = 0;
                    G = 0; R = 0; S = 0;
                end
            end
        
      
        end else begin 
            norm_sign = sign_a ^ sign_b;
            norm_exp = (exp_a + exp_b) - 8'd127;
            
            mult_prod = mant_a * mant_b;
            
            if (mult_prod[47]) begin
                norm_exp = norm_exp + 1;
                norm_mant = mult_prod[47:24];
                G = mult_prod[23];
                R = mult_prod[22];
                S = |mult_prod[21:0];
            end else begin
                norm_mant = mult_prod[46:23];
                G = mult_prod[22];
                R = mult_prod[21];
                S = |mult_prod[20:0];
            end
            
            op_sign_a = 0; op_sign_b = 0; op_exp_a = 0; op_exp_b = 0;
            op_mant_a = 0; op_mant_b = 0; op_sub = 0; exp_diff = 0;
            mant_b_shifted = 0; sticky_bit = 0; aligned_mant_a = 0;
            aligned_mant_b = 0; add_sum = 0; lzd_shift = 0; temp_mant = 0;
        end
        
        if (G && (R || S || norm_mant[0])) begin
            round_up = 1;
        end else begin
            round_up = 0;
        end

        if (round_up) begin
            rounded_mant = norm_mant + 1;
            if (rounded_mant == 24'h1000000) begin // 1 followed by 23 zeros
                final_exp = norm_exp + 1;
                rounded_mant = {1'b1, 23'd0}; // Normalized 1.0
            end else begin
                final_exp = norm_exp;
            end
        end else begin
            rounded_mant = norm_mant;
            final_exp = norm_exp;
        end

       
        if (norm_exp == 0 && rounded_mant == 0) 
            next_data = 32'd0;
        else
            next_data = {norm_sign, final_exp, rounded_mant[22:0]};
    end

    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            o_data     <= 0;
            o_valid    <= 0;
        end else begin
            o_data     <= next_data;
            o_valid    <= i_valid;
        end
    end

endmodule