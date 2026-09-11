module shifter_4b (
    input logic [3:0] dato,
    input logic aritmetico,
    output logic [3:0] resultado,
    output logic negativo, zero
);
  // COMPLETAR: desplazar dato una posición a derecha según aritmetico.
  // Reutilizar negativo_4b y zero_4b sobre resultado.
  // En modo lógico, ambos flags deben valer 0.

  logic bit_extension;
  assign bit_extension = aritmetico ? dato[3] : 1'b0;
  assign resultado = {bit_extension, dato[3:1]};

  //assign resultado = {aritmetico ? dato[3] : 1'b0, dato[3:1]};    alternativa en una sola linea

  logic negativo_res, zero_res;

  negativo_4b negativo_4b (
    .dato    (resultado),
    .negativo(negativo_res)
  );

  zero_4b zero_4b (
    .dato(resultado),
    .zero(zero_res)
  );

  assign negativo = aritmetico ? negativo_res : 1'b0;
  assign zero = aritmetico ? zero_res : 1'b0;

endmodule
