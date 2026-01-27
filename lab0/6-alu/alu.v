module alu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 4
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output reg [DATA_WIDTH-1:0] o_data,
    output reg                 o_overflow,
    output reg                 o_valid
);

    // TODO: Implement the ALU module
    
    reg [DATA_WIDTH-1:0] tmp_result;
    reg [DATA_WIDTH:0] full_sum;
    reg [63:0] wide_mult;
    integer k;

    reg [DATA_WIDTH-1:0] next_data;
    reg                  next_overflow;

    always @(*) begin
        next_data     = 0;
        next_overflow = 1'b0;
        tmp_result    = 0; // Initialize temps to prevent stale data
        full_sum      = 0;
        wide_mult     = 0;

        case (i_inst)
            4'h0: begin
                tmp_result = $signed(i_data_a) + $signed(i_data_b);
                next_data = tmp_result;   // signed add
                next_overflow = ((i_data_a[31] == i_data_b[31]) && (tmp_result[31] != i_data_a[31]));
            end

            4'h1: begin
                tmp_result = $signed(i_data_a) - $signed(i_data_b);
                next_data = tmp_result;   // signed sub
                next_overflow = ((i_data_a[31] != i_data_b[31]) && (tmp_result[31] != i_data_a[31]));
            end
            
            4'h2: begin
                next_data = $signed(i_data_a) * $signed(i_data_b);  // signed mult
                wide_mult = $signed(i_data_a) * $signed(i_data_b);
                next_overflow = (wide_mult[63:31] != {33{wide_mult[31]}});
            end

            4'h3: begin
                if ($signed(i_data_a) > $signed(i_data_b)) begin
                    next_data = i_data_a;
                end else begin
                    next_data = i_data_b;   // signed max
                end
                next_overflow = 1'b0;
            end

            4'h4: begin
                if ($signed(i_data_a) > $signed(i_data_b)) begin
                    next_data = i_data_b;
                end else begin
                    next_data = i_data_a;   // signed min
                end
                next_overflow = 1'b0;
            end

            4'h5: begin
                next_data = i_data_a + i_data_b;   // unsigned add
                full_sum = i_data_a + i_data_b;
                next_overflow = full_sum[DATA_WIDTH];
            end

            4'h6: begin
                next_data = i_data_a - i_data_b;   // unsigned sub
                next_overflow = (i_data_a < i_data_b);
            end

            4'h7: begin
                next_data = i_data_a * i_data_b;  // unsigned mult
                wide_mult = i_data_a * i_data_b;
                next_overflow = (wide_mult[63:32] != 32'b0);
            end 

            4'h8: begin
                if (i_data_a > i_data_b) begin
                    next_data = i_data_a;
                end else begin
                    next_data = i_data_b;   // unsigned max
                end
                next_overflow = 1'b0;
            end

            4'h9: begin
                if (i_data_a > i_data_b) begin
                    next_data = i_data_b;
                end else begin
                    next_data = i_data_a;   // unsigned min
                end
                next_overflow = 1'b0;
            end

            4'ha: begin
                next_data = i_data_a & i_data_b;   // and
                next_overflow = 1'b0;
            end

            4'hb: begin
                next_data = i_data_a | i_data_b;   // or
                next_overflow = 1'b0;
            end

            4'hc: begin
                next_data = i_data_a ^ i_data_b;   // xor
                next_overflow = 1'b0;
            end

            4'hd: begin
                next_data = ~i_data_a;   // bitflip
                next_overflow = 1'b0;
            end

            4'he: begin
                for (k = 0; k < DATA_WIDTH; k = k + 1) begin
                    next_data[k] = i_data_a[(DATA_WIDTH-1) - k]; // bitreverse
                end  
                next_overflow = 1'b0;
            end

            default: next_data = 32'b0;
        endcase
    end

    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            o_data     <= 0;
            o_overflow <= 0;
            o_valid    <= 0;
        end else begin
            o_data     <= next_data;
            o_overflow <= next_overflow;
            o_valid    <= i_valid;
        end
    end


endmodule