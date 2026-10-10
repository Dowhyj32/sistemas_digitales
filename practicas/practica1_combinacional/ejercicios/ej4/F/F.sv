module F (
    input logic A,
    input logic B,
    input logic C,
    output logic out
);

//    assign out = (B & C) | (A & ~B);
    assign out = (A | B) & (~B | C);


endmodule
