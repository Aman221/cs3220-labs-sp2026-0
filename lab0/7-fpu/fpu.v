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
    output [DATA_WIDTH-1:0] o_data,
    output                  o_valid
);

    // TODO: Implement the FPU module

    reg [DATA_WIDTH-1:0] next_data;

    reg sign_a = i_data_a[DATA_WIDTH-1];
    reg sign_b = i_data_b[DATA_WIDTH-1];

    reg exponent_a = i_data_a[DATA_WIDTH-2:DATA_WIDTH-9];
    reg exponent_b = i_data_b[DATA_WIDTH-2:DATA_WIDTH-9];

    reg mant_a = i_data_a[DATA_WIDTH-10:0];
    reg mant_b = i_data_b[DATA_WIDTH-10:0];

    always @(*) begin
        next_data = 0;
        sign_a = 0;
        sign_b = 0;
        exponent_a = 0;
        exponent_b = 0;
        mant_a = 0;
        mant_b = 0;

        

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