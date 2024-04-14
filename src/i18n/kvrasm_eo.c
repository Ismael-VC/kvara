#undef OPCODE_LENGTH
#define OPCODE_LENGTH 8

#undef  BRK
#define BRK "INT"  // interrompi

#undef  LIT
#define LIT "LIT"  // litero

#undef  LIT2
#define LIT2 "LIT2"

#undef  INC
#define INC "PGR"  // pligrandigi

#undef  POP
#define POP "RET"  // retpreni

#undef  NIP
#define NIP "FOR"  // fortranĉi

#undef  SWP
#define SWP "ŜAĜ"  // ŝanĝi

#undef  ROT
#define ROT "ROT"  // rotacii

#undef  DUP
#define DUP "DUP"  // duplici

#undef  OVR
#define OVR "SUP"  // superloki

#undef  EQU
#define EQU "EGA"  // egali

#undef  NEQ
#define NEQ "NEG"  // ne egali

#undef  GTH
#define GTH "PGO"  // pli granda ol

#undef  LTH
#define LTH "MGO"  // malpli granda ol

#undef  JMP
#define JMP "SAL"  // salti

#undef  JCN
#define JCN "SKN"  // salti kondiĉe

#undef  JSR
#define JSR "SRR"  // salti rezervi revenon

#undef  STH
#define STH "REZ"  // rezervi

#undef  LDZ
#define LDZ "ŜAN"  // ŝargi nulon (paĝo)

#undef  STZ
#define STZ "KON"  // konservi nulon (paĝo)

#undef  LDR
#define LDR "ŜAR"  // ŝargi relative

#undef  STR
#define STR "KOR"  // konservi relative

#undef  LDA
#define LDA "ŜAA"  // ŝargi absolute

#undef  STA
#define STA "KOA"  // konservi absolute

#undef  DEI
#define DEI "END"  // enirilaj dispozitivoj

#undef  DEO
#define DEO "ELD"  // elirilaj dispozitivoj

#undef  ADD
#define ADD "ADI"  // adicii

#undef  SUB
#define SUB "SUB"  // subtrahi

#undef  MUL
#define MUL "MUL"  // multipliki

#undef  DIV
#define DIV "DIV"  // dividi

#undef  AND
#define AND "KBO"  // kaj bitope

#undef  ORA
#define ORA "ABO"  // aŭ bitope

#undef  EOR
#define EOR "EKA"  // ekskluziva aŭ

#undef  SFT
#define SFT "ŜOV"  // ŝovi

#undef  ERROR_ASM
#define ERROR_ASM "%s: %s ĉe @%s, %s:%d.\n"

#undef  RETURN_MODE
#define RETURN_MODE 'r'  // reveni

#undef  KEEP_MODE
#define KEEP_MODE 'k'  // konservi

#undef  COMMENT_INCOMPLETE
#define COMMENT_INCOMPLETE "Komentario nekompleta"

#undef  TOKEN_TOO_LONG
#define TOKEN_TOO_LONG "Simbolaĵo tro longa"

#undef  MACROS_LIMIT_EXCEEDED
#define MACROS_LIMIT_EXCEEDED "Limigo de makroj superita"

#undef  MACRO_IS_INVALID
#define MACRO_IS_INVALID "Makro nevalida"

#undef  MACRO_IS_DUPLICATE
#define MACRO_IS_DUPLICATE "Makro duobla"

#undef  MACRO_NESTED
#define MACRO_NESTED "Makro ennesta"

#undef  LABELS_LIMIT_EXCEEDED
#define LABELS_LIMIT_EXCEEDED "Limigo de etikedoj superita"

#undef  LABEL_INVALID
#define LABEL_INVALID "Etikedo nevalida"

#undef  LABEL_DUPLICATE
#define LABEL_DUPLICATE "Etikedo duobla"

#undef  REFERENCES_LIMIT_EXCEEDED
#define REFERENCES_LIMIT_EXCEEDED "Limigo de referencoj superita"

#undef  PADDING_INVALID
#define PADDING_INVALID "Fadeno nevalida"

#undef  WRITING_ZERO_PAGE
#define WRITING_ZERO_PAGE "Skribado nul-paĝe"

#undef  WRITING_OUTSIDE_MEMORY
#define WRITING_OUTSIDE_MEMORY "Skribado ekster la memoro"

#undef  WRITING_REWIND
#define WRITING_REWIND "Rewind skribado"

#undef  HEXADECIMAL_INVALID
#define HEXADECIMAL_INVALID "Deksesuma nevalida"

#undef  STRING_INVALID
#define STRING_INVALID "Fadeno nevalida"

#undef  SOURCE_MISSING
#define SOURCE_MISSING "Fonto mankanta"

#undef  DEPRECATED_RUNE_USE
#define DEPRECATED_RUNE_USE "Uzante malnovan signon %s, uzas =%s\n"

#undef  INCLUDE_MISSING
#define INCLUDE_MISSING "Inkluziva mankanta"

#undef  OUTPUT_EMPTY
#define OUTPUT_EMPTY "Elsendo malplena"

#undef  LABEL_UNKNOWN
#define LABEL_UNKNOWN "Etikedo nekonata"

#undef  RELATIVE_REFERENCE_TOO_FAR
#define RELATIVE_REFERENCE_TOO_FAR "Relativa referenco tro malproksima"

#undef  OUTPUT_FILE_INVALID
#define OUTPUT_FILE_INVALID "Elsendo-dosiero nevalida"

#undef  UNUSED_LABEL
#define UNUSED_LABEL "-- Neuzata etikedo: %s\n"

#undef  ASSEMBLED_IN_BYTES_USED_LABELS_MACROS
#define ASSEMBLED_IN_BYTES_USED_LABELS_MACROS "Asamblita %s en %d bajtoj (%.2f%% uzata), %d etikedoj, %d makroj.\n"

#undef  SYMBOLS_FILE_INVALID
#define SYMBOLS_FILE_INVALID "Dosiero de simboloj nevalida"

#undef  ON_RESET
#define ON_RESET "sur-restarigo"

#undef  KVRASM_KVARA_ASSEMBLER_DATE
#define KVRASM_KVARA_ASSEMBLER_DATE "kvrasm - Kvara Asamblilo, 12 apr 2024.\n"

#undef  USAGE
#define USAGE "uzado"

#undef  EXAMPLE
#define EXAMPLE "kvrasm-eo [-v] enigo.kvreo eligo.rom"
