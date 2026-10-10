module igualdad3(
    input logic x,
    input logic y,
    input logic z,
    output logic f
);

//    assign f = x & z;
    assign f = (x | y) & ( x | ~y) & (~x | z);

endmodule