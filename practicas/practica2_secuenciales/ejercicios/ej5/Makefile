SRC = register.sv register_tb.sv
TOP = register_tb
VFLAGS = --binary --timing -Wall -Wno-DECLFILENAME --top-module $(TOP)

.PHONY: sim test4 test8 lint clean

sim: test4 test8

test4:
	verilator $(VFLAGS) -GN=4 --Mdir obj_n4 $(SRC)
	./obj_n4/V$(TOP)

test8:
	verilator $(VFLAGS) -GN=8 --Mdir obj_n8 $(SRC)
	./obj_n8/V$(TOP)

lint:
	verilator --lint-only -Wall register.sv

clean:
	rm -rf obj_n4 obj_n8