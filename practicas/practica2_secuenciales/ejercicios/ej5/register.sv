module register #(
    parameter int N = 8
) (
    input logic clk,
    input logic reset,
    input logic write_enable,
    input logic [N-1:0] data_in,
    output logic [N-1:0] data_out
);

    always_ff @(posedge clk) begin
        if (reset) begin
            data_out <= '0;
        end
        else if (write_enable) begin
            data_out <= data_in;
        end
    end
    
endmodule
