# Kvara

Kvara is an assembler with i18n (internationalization) support for the Varvara/Uxn ecosystem forked from the reference assembler uxnasm implemented in C.

- **kvara** means fourth in Esperanto.
- **kvara** rhymes with varvara.
- **kvara** is the fourth uxntal assembler I have used, the others are: *uxnasm*, *asma* and *drifblim*.

### Supported Languages

- English
- Spanish (`LANG_ES`)
- Esperanto (`LANG_EO`)
- Toki pona (`LANG_TOK`)

## Build

```console
$ gcc src/kvrasm.c -o bin/kvrasm                  # Build with default language (English)
$ gcc src/kvrasm.c -o bin/kvrasm-es -D LANG_ES    # Spanish version.
$ gcc src/kvrasm.c -o bin/kvrasm-eo -D LANG_EO    # Esperanto version.
$ gcc src/kvrasm.c -o bin/kvrasm-tok -D LANG_TOK  # Toki pona version.
```

## Usage

```console
$ bin/kvrasm examples/english/sierpinski.kvr roms/sierpinski.rom
$ bin/kvrasm-es examples/spanish/sierpinski.kvres roms/sierpinski-es.rom
$ bin/kvrasm-eo examples/esperanto/sierpinski.kvreo roms/sierpinski-eo.rom
$ bin/kvrasm-tok examples/toki-pona/sierpinski.kvrtok roms/sierpinski-tok.rom
```

## Test

```console
$ uxncli roms/sierpinski.rom
$ uxncli roms/sierpinski-es.rom
$ uxncli roms/sierpinski-eo.rom
$ uxncli roms/sierpinski-tok.rom
```

## TODO

- [ ] Use the opcode test for all languages.
