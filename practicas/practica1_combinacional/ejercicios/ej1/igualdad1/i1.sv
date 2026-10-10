module igualdad1 (
        input logic x,
        input logic y,
        output logic f
);

    assign f = (x & y) | (x & ~y);
//  assing f = x    

endmodule