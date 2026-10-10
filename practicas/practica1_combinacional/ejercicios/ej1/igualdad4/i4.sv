module igualdad4 (
    input logic x,
    input logic y,
    input logic z,
    output logic f
);

    assign f = ~x & ~(y & z);

endmodule