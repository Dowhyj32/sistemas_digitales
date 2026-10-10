module igualdad2(
    input logic x,
    input logic y,
    output logic f
);

    assign f = (x | y) & (x | ~y);
//  assign f = x;

endmodule