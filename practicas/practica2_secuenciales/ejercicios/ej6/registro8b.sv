module registro8b (
    input logic clk,
    input logic reset,
    input logic load,
    input logic shift,
    input logic serial_in,
    input logic [7:0] data_in,
    output logic [7:0] data_out
);
    

    always_ff @(posedge clk) begin
        if (reset) begin
            data_out <= '0;
        end
        else if (load) begin
            data_out <= data_in;
        end
        else if (shift) begin
            data_out <= {data_out[6:0], serial_in};
        end
    end


endmodule
