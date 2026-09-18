module contador_posicion (
    input logic clk, input logic rst,
    input logic subir, input logic bajar,
    output logic [1:0] posicion
);
  // COMPLETAR: contador saturado entre 0 (cerrado) y 3 (abierto).

  always_ff @(posedge clk or posedge rst) begin
    if (subir) begin
      posicion += 2'b01;
    end

    else if (bajar) begin
      posicion -= 2'b01;
    end

  end

endmodule
