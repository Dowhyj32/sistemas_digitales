module G (
    input logic D,
    input logic E,
    input logic F,
    output logic out
);

//    assign out = (D | ~E | F) & (~D | E | ~F);
    assign out = (~D & ~E) | (E & F) | (D & ~F);

endmodule
