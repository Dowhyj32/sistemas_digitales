# Ejercicio 2 — Banco de registros

Condiciones iniciales: R1 = 10, R2 = 20, lectura ya realizada con A = 1 y B = 2. 
en un flanco, todas las lecturas ven el estado previo al flanco; lo escrito se ve recién desde el flanco siguiente.

| Instante / acción | dout A | dout B | R2 |
|---|---|---|---|
| Situación inicial | 10 | 20 | 20 | Ya hubo un flanco con A = 1 y B = 2 |
| A cambia a índice 2, antes del flanco | 10 | 20 | 20 |
| Después del siguiente flanco | 20 | 20 | 20 |
| Después de escribir 99 en R2 por A | 20 | 20 | 99 |
| Después del siguiente flanco sin escritura | 99 | 99 | 99 |

en un flanco, todas las lecturas ven el estado previo al flanco; lo escrito se ve recién desde el flanco siguiente.


Al intentar escribir en R0, este registro se mantiene igual ya que se implementó que se descarten las escrituras en ese registro:

```systemverilog
// Escritura sincrónica en Puerto A y Puerto B (descarta escrituras en el registro 0)
always_ff @(posedge clk) begin
    if (regA_we && (regA_idx != '0)) begin
        rf[regA_idx] <= regA_din;
    end
    if (regB_we && (regB_idx != '0)) begin
        rf[regB_idx] <= regB_din;
    end
end
```

Y las salidas de A y B son cero en caso de que el índice sea 0, ya que también se implementó de esa manera:

```systemverilog
// Lectura sincrónica Read-First: se lee el contenido previo en regA_idx y regB_idx
// antes de que cualquier escritura modifique la posición de memoria en el flanco.
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        regA_dout <= '0;
        regB_dout <= '0;
    end else begin
        regA_dout <= (regA_idx == '0) ? '0 : rf[regA_idx];
        regB_dout <= (regB_idx == '0) ? '0 : rf[regB_idx];
    end
end
```