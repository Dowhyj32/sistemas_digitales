module sumador_flags_4b (
    input logic [3:0] a, b,
    output logic [3:0] sum,
    output logic overflow, carry, negativo, zero
);
  // COMPLETAR: Instanciar el sumador provisto y los módulos de ej2, ej4 y ej5.
  // Conectar el flag Carry según lo respondido en ej3. Usar un solo sumador.


  sumador_4b sumador_4b (
    .a   (a),
    .b   (b),
    .cin (0),
    .sum (sum),
    .cout(carry)
  );


  overflow_4b overflow_4b (
    .a       (a),
    .b       (b),
    .sum     (sum),
    .overflow(overflow)
  );

  negativo_4b negativo_4b (
    .dato    (sum),
    .negativo(negativo)
  );

  zero_4b zero_4b (
    .dato(sum),
    .zero(zero)
  );


endmodule
