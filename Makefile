en: setup
ifeq (,$(wildcard bin/kvrasm))
	@echo "Building kvrasm executable."
	@gcc src/kvrasm.c -o bin/kvrasm
endif

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

test-all: test test-es test-eo test-tok

test: en
	@echo "Testing kvrasm."
	@bin/kvrasm examples/english/sierpinski.kvr roms/sierpinski.rom
	@utils/uxncli roms/sierpinski.rom

test-es: es
	@echo "Testing kvrasm-es."
	@bin/kvrasm-es examples/spanish/sierpinski.kvres roms/sierpinski-es.rom
	@utils/uxncli roms/sierpinski-es.rom

test-eo: eo
	@echo "Testing kvrasm-eo."
	@bin/kvrasm-eo examples/esperanto/sierpinski.kvreo roms/sierpinski-eo.rom
	@utils/uxncli roms/sierpinski-eo.rom

test-tok: tok
	@echo "Testing kvrasm-tok."
	@bin/kvrasm-tok examples/toki-pona/sierpinski.kvrtok roms/sierpinski-tok.rom
	@utils/uxncli roms/sierpinski-tok.rom

install-all: all install install-es install-eo install-tok

install: en install-setup install-path
	@echo "Installing kvrasm at ~/bin directory."
	@cp bin/kvrasm ~/bin

install-es: es install-setup install-path
	@echo "Installing kvrasm-es at ~/bin directory."
	@cp bin/kvrasm-es ~/bin

install-eo: eo install-setup install-path
	@echo "Installing kvrasm-eo at ~/bin directory."
	@cp bin/kvrasm-eo ~/bin

install-tok: tok install-setup install-path
	@echo "Installing kvrasm-tok at ~/bin directory."
	@cp bin/kvrasm-tok ~/bin

install-path:
	@echo "Make sure that ~/bin is in your PATH."

install-setup:
ifeq (,$(wildcard ~/bin))
	@echo "Creating ~/bin directory."
	@mkdir ~/bin
endif

clean:
ifneq (,$(wildcard bin))
	@echo "Deleting bin directory."
	@rm -rf bin
endif

ifneq (,$(wildcard roms))
	@echo "Deleting roms directory."
	@rm -rf roms
endif
