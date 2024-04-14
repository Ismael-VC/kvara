all: en es eo tok

setup:
ifeq (,$(wildcard bin))
	@echo "Creating bin directory."
	@mkdir bin
endif

ifeq (,$(wildcard roms))
	@echo "Creating roms directory."
	@mkdir roms
endif

en: setup
ifeq (,$(wildcard bin/kvrasm))
	@echo "Building kvrasm executable."
	@gcc src/kvrasm.c -o bin/kvrasm
endif

es: setup
ifeq (,$(wildcard bin/kvrasm-es))
	@echo "Building kvrasm-es executable."
	@gcc src/kvrasm.c -o bin/kvrasm-es -D LANG_ES
endif

eo: setup
ifeq (,$(wildcard bin/kvrasm-eo))
	@echo "Building kvrasm-eo executable."
	@gcc src/kvrasm.c -o bin/kvrasm-eo -D LANG_EO
endif

tok: setup
ifeq (,$(wildcard bin/kvrasm-tok))
	@echo "Building kvrasm-tok executable."
	@gcc src/kvrasm.c -o bin/kvrasm-tok -D LANG_TOK
endif

test: all
	@echo "Testing kvrasm."
	@bin/kvrasm examples/english/sierpinski.kvr roms/sierpinski.rom
	@uxncli roms/sierpinski.rom

	@echo "Testing kvrasm-es."
	@bin/kvrasm-es examples/spanish/sierpinski.kvres roms/sierpinski-es.rom
	@uxncli roms/sierpinski-es.rom

	@echo "Testing kvrasm-eo."
	@bin/kvrasm-eo examples/esperanto/sierpinski.kvreo roms/sierpinski-eo.rom
	@uxncli roms/sierpinski-eo.rom

	@echo "Testing kvrasm-tok."
	@bin/kvrasm-tok examples/toki-pona/sierpinski.kvrtok roms/sierpinski-tok.rom
	@uxncli roms/sierpinski-tok.rom

clean:
ifneq (,$(wildcard bin))
	@echo "Deleting bin directory."
	@rm -rf bin
endif

ifneq (,$(wildcard roms))
	@echo "Deleting roms directory."
	@rm -rf roms
endif
