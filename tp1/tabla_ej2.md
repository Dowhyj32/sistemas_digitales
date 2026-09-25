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