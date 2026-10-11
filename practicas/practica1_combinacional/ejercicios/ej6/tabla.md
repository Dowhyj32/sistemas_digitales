| in[3:0] | valid | code[1:0] |
|:-------:|:-----:|:---------:|
|  0000   |   0   |    --     |
|  0001   |   1   |    00     |
|  0010   |   1   |    01     |
|  0011   |   0   |    --     |
|  0100   |   1   |    10     |
|  0101   |   0   |    --     |
|  0110   |   0   |    --     |
|  0111   |   0   |    --     |
|  1000   |   1   |    11     |
|  1001   |   0   |    --     |
|  1010   |   0   |    --     |
|  1011   |   0   |    --     |
|  1100   |   0   |    --     |
|  1101   |   0   |    --     |
|  1110   |   0   |    --     |
|  1111   |   0   |    --     |


### Suma de Productos para cada valid

Partiendo de la Suma de Productos:

`valid = ¬in[3]·¬in[2]·¬in[1]·in[0] + ¬in[3]·¬in[2]·in[1]·¬in[0] + ¬in[3]·in[2]·¬in[1]·¬in[0] + in[3]·¬in[2]·¬in[1]·¬in[0]`

1. **Distributividad** (factor común `¬in[3]·¬in[2]` en los dos primeros términos y `¬in[1]·¬in[0]` en los dos últimos, usando conmutatividad y asociatividad para agruparlos):

   `valid = ¬in[3]·¬in[2]·(¬in[1]·in[0] + in[1]·¬in[0]) + ¬in[1]·¬in[0]·(¬in[3]·in[2] + in[3]·¬in[2])`

2. **Definición de XOR** (`¬x·y + x·¬y = x ⊕ y`):

   `valid = ¬in[3]·¬in[2]·(in[1] ⊕ in[0]) + ¬in[1]·¬in[0]·(in[3] ⊕ in[2])`

Interpretación: la entrada es válida si una mitad está en `00` y la otra mitad tiene exactamente un bit en 1.