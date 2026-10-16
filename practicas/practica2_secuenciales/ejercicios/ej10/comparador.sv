module comparador (
    input logic [6:0] contador,
    output logic cuenta_cien
);
    
    //assign cuenta_cien = (contador == 7'b1100100) ? 1'b1 : 1'b0;
    
    assign cuenta_cien = (contador == 7'b1100100);

endmodule
