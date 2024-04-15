# Kvara 

![example workflow](https://github.com/Ismael-VC/kvara/actions/workflows/kvara-ci.yml/badge.svg)

Kvara is an assembler with i18n (internationalization) support for the 
Varvara/Uxn ecosystem, forked from the reference *uxnasm* assembler implemented
in C.

### What is the meaning of *Kvara*?

- **Kvara** means *fourth* in Esperanto.
- **Kvara** rhymes with Uxn's *Varvara*.
- **Kvara** is the fourth Uxntal assembler that I have used, the others were:
  *uxnasm*, *asma* and *drifblim*.
- **Kvara** is also a reference to the *Forth* programming langauge, which led
  me to the Uxn ecosystem.

### Supported Languages

- English
- Spanish (`es`)
- Esperanto (`eo`)
- Toki pona (`tok`)

## Build

```bash
$ make      # English version.
$ make all  # All versions.
$ make es   # Spanish version.
$ make eo   # Esperanto version.
$ make tok  # Toki pona version.
```

## Usage

```bash
$ kvrasm[-es|-eo|-tok] input.kvr[es|eo|tok] [output.rom]
```

## Test

```bash
$ make test      # Test English version.
$ make test-all  # Test all versions.
$ make test-es   # Test Spanish version.
$ make test-eo   # Test Esperanto version.
$ make test-tok  # Test Toki pona version.
```

## Install

```bash
$ make install      # Install English version.
$ make install-all  # Install all versions.
$ make install-es   # Install Spanish version.
$ make install-eo   # Install Esperanto version.
$ make install-tok  # Install Toki pona version.
```

The executables are installed at `~/bin`, make sure that this directory is in 
your `PATH` and that you have sourced your shell configuration file, for example 
`~/.bashrc` or start a new shell session for Kvara assembler(s) to be available
from any directory.

```bash
$ make install
$ echo "export PATH=$PATH:~/bin" >> ~/.bashrc
$ source ~/.bashrc
```

## Differences From Uxnasm

- Kvara supports `\ comment` backslash space Forth style comments, these are 
  not part of the Uxntal specification which only supports `( comment )` 
  parenthesis Forth style comments (there must whitespace after the opening
  `(` and closing `)` parenthesis). 

## Utils

- In order to offer full compatibility with other standard Uxntal assemblers,
  ease porting standard Uxntal to a supported Kvara language and also porting
  from one supported kvara language to another there is the *Kvara porter* at
  `utils/kvrprt`.

## TODO

- [ ] Implement `kvrptr` (Kvara porter).
- [ ] Explain how to contribute and add a new language.
- [ ] Implement another utility to scafold and make easier adding new languages.
- [ ] Use the opcode test for all languages.
