module rotador4 (
    input logic clk,
    input logic rst,
    input logic we,
    output logic [3:0] dato_rotado
);

    always_ff @(posedge clk) begin
        if (rst) begin
            dato_rotado <= 4'b0001;
        end
        else if (we) begin
            dato_rotado <= {dato_rotado[2:0], dato_rotado[3]};
        end
    end

endmodule
