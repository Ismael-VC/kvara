all: kvrasm kvrasm-es kvrasm-eo kvrasm-tok

kvrasm: setup
	echo "Compiling: kvrasm"
	gcc src/kvrasm.c -o bin/kvrasm
	bin/kvrasm examples/english/sierpinski.tal roms/sierpinski-en.rom
	echo

kvrasm-es: setup
	echo "Compiling: kvrasm-es"
	gcc src/kvrasm.c -o bin/kvrasm-es -D LANG_ES
	bin/kvrasm-es examples/spanish/sierpinski.kvres roms/sierpinski-es.rom
	echo

kvrasm-eo: setup
	echo "Compiling: kvrasm-eo"
	gcc src/kvrasm.c -o bin/kvrasm-eo -D LANG_EO
	bin/kvrasm-eo examples/esperanto/sierpinski.kvreo roms/sierpinski-eo.rom
	echo

kvrasm-tok: setup
	echo "Compiling: kvrasm-tok"
	gcc src/kvrasm.c -o bin/kvrasm-tok -D LANG_TOK
	bin/kvrasm-tok examples/toki-pona/sierpinski.kvrtok roms/sierpinski-tok.rom
	echo

setup:
	echo "Creating directory: roms"
	[ ! -d roms ] && mkdir roms
	echo
	
	echo "Creating directory: bin"
	[ ! -d bin ] && mkdir bin
	echo

clean:
	@ echo "Cleaning: bin/kvrasm*"
	[ -d `bin` ] && [ -f `bin/kvrasm*` ] && rm bin/kvrasm*
	@ echo

	@ echo "Cleaning: roms/*.sym roms/*.rom"
	[ -d `roms` ] && [ -f `roms/*.sym` ] && [ -f `roms/*.rom` ] && rm roms/*.sym roms/*.rom
	@ echo
