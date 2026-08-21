//fórmula original
/*
module formula_and_or_not (
    input  logic x,
    input  logic y,
    input  logic z,
    output logic f
);

  logic p, q, r;

  assign p = x | y;
  assign q = x | ~y;
  assign r = x | z;

  assign f = p & q & r;

endmodule
*/

//formula reducida

module formula_and_or_not (
    input  logic x,
    input  logic y,
    input  logic z,
    output logic f
);

  assign f = x;

endmodule