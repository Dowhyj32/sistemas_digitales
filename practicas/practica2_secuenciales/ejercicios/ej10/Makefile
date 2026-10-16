SRC = contador7.sv comparador.sv rotador4.sv semaforo.sv semaforo_tb.sv
TOP = semaforo_tb
VFLAGS = --binary --timing -Wall -Wno-DECLFILENAME --top-module $(TOP)

.PHONY: sim lint clean

sim:
	verilator $(VFLAGS) --Mdir obj_dir $(SRC)
	./obj_dir/V$(TOP)

lint:
	verilator --lint-only -Wall --top-module semaforo contador7.sv comparador.sv rotador4.sv semaforo.sv

clean:
	rm -rf obj_dir