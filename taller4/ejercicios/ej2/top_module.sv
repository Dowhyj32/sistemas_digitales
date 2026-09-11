module top_module (
    input logic [3:0] a, b,
    output logic [3:0] sum,
    output logic overflow
);
  // COMPLETAR: conectar el sumador provisto (cin=0) con overflow_4b.

  logic basura;

  sumador_4b sumador_4b (
    .a   (a),
    .b   (b),
    .cin (0),
    .sum (sum),
    .cout(basura)
  );

  overflow_4b overflow_4b (
    .a       (a),
    .b       (b),
    .sum     (sum),
    .overflow(overflow)
  );

endmodule
