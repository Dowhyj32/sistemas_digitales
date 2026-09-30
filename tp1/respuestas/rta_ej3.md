R5 <- R1 + R2 con R1=10 y R2=20
![Diagrama de tiempo](img/ej3_cap1.png)

En en instante marcado durante el flanco ascendente los operandos toman los valores de los registros R1 y R2, y la salida aun no refleja la el resultado de la operación pues rf_we=0.


Escritura en el registro R5
![Diagrama de tiempo](img/ej3_cap2.png)


Como estamos en un flanco ascendente (clk=1), y escritura habilitada (rf_we=1) notemos que regA_idx=rd (indice donde queremos guardar el resultado) => se realiza la escritura en el registro R5


R6 ← R5 − R1

![Diagrama de tiempo](img/ej3_cap3.png)

En en instante marcado durante el flanco ascendente los operandos toman los valores de los registros R5 y R1, y la salida aun no refleja la el resultado de la operación pues rf_we=0.

![Diagrama de tiempo](img/ej3_cap4.png)

Como estamos en un flanco ascendente (clk=1), y escritura habilitada (rf_we=1) notemos que regA_idx=rd (indice donde queremos guardar el resultado) => se realiza la escritura en el registro R6


¿Por  qué seleccionar rd no cambia inmediatamente el operando A de la ALU?


En ambos casos cuando seleccionamos rd el operando A aun no cambia ya que se tiene que esperar al proximo flanco ascendente (clk=1) para escribir el resultado en rd. Luego por implementación el operando A cambia a 0.

![Diagrama de tiempo](img/ej3_cap5.png)
![Diagrama de tiempo](img/ej3_cap6.png)

