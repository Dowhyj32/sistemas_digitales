# Agregá una línea por cada ejercicio (ej: $(MAKE) -C ej1 sim)
EJS =

.PHONY: sim clean

sim:
	@for e in $(EJS); do $(MAKE) -C $$e sim || exit 1; done

clean:
	@for e in $(EJS); do $(MAKE) -C $$e clean; done
