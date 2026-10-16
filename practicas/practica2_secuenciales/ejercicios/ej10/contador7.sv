module contador7 (
    input logic clk,
    input logic rst,
    input logic clear,
    output logic [6:0] cuenta
);

    always_ff @(posedge clk) begin
        if (rst || clear) begin
            cuenta <= 7'd1;
        end
        else begin
            cuenta <= cuenta + 1;
        end
    end
    
endmodule

