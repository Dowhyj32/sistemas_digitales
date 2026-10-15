SRC = registro8b.sv registro8b_tb.sv
TOP = registro8b_tb
VFLAGS = --binary --timing -Wall -Wno-DECLFILENAME --top-module $(TOP)

.PHONY: sim lint clean

sim:
	verilator $(VFLAGS) --Mdir obj_dir $(SRC)
	./obj_dir/V$(TOP)

lint:
	verilator --lint-only -Wall registro8b.sv

clean:
	rm -rf obj_dir