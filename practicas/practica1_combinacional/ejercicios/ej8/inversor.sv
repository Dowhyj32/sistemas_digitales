module inversor_controlado #(parameter int N = 3) (
    input logic [N-1:0] in,
    input logic invert,
    output logic [N-1:0] out
);

    assign out =  in ^ {N{invert}};
    
endmodule