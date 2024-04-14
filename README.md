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

```bash
$ make      # All versions.
$ make en   # English version.
$ make es   # Spanish version.
$ make eo   # Esperanto version.
$ make tok  # Toki pona version.
```

## Usage

```bash
$ kvrasm[-es|-eo|-tok] input.kvr[es|eo|tok] output.rom
```

## Test

```bash
$ make test      # Test all versions.
$ make test-en   # Test English version.
$ make test-es   # Test Spanish version.
$ make test-eo   # Test Esperanto version.
$ make test-tok  # Test Toki pona version.

```

## Differences From Uxnasm

- Kvara supports `\ comment` (backslash+space) Forth style comments, these are not 
  part of the Uxntal specification which only support `( comment )` 
  (there must whitespace after the opening `( ` and closing ` )` parenthesis) 
  Forth style comments. 

## Utils

- In order to offer full compatibility with other standard Uxntal assemblers,
  ease porting standard Uxntal to a supported Kvara language and also porting
  from one supported kvara language to another there is the *Kvara porter* at
  `utils/kvrprt`.

## TODO

- [ ] Make `kvr2tal.py` better.
- [ ] Make `tal2kvr.py`.
- [ ] Explain how to contribute and add a new language.
- [ ] Implement another utility to scafold and make easier adding new languages.
- [ ] Use the opcode test for all languages.
