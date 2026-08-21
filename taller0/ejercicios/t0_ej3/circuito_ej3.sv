// Taller 0 · Ejercicio 3
// Interpretar el circuito del enunciado e implementarlo.
/*
module circuito_ej3 (
    input  logic a,
    input  logic b,
    output logic y
);

  logic p, q;

  assign p = (~a & b);
  assign q = (a & ~b);

  assign y = p | q;

endmodule
*/

// Alternativa: enel circuito original y=1 solo cuando a y b son distintas
// Por lo tanto podemos implementar usar directamente el operador XOR y las 5 compuertas del diagrama se reducen a una sola


module circuito_ej3 (
    input  logic a,
    input  logic b,
    output logic y
);

  assign y = a ^ b;

endmodule