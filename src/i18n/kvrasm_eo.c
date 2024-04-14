#define OPCODE_LENGTH 6
#define BRK "INT"  // interrompi
#define LIT "LIT"  // litero
#define LIT2 "LIT2"
#define INC "PGR"  // pligrandigi
#define POP "RET"  // retpreni
#define NIP "FOR"  // fortranĉi
#define SWP "ŜAĜ"  // ŝanĝi
#define ROT "ROT"  // rotacii
#define DUP "DUP"  // duplici
#define OVR "SUP"  // superloki
#define EQU "EGA"  // egali
#define NEQ "NEG"  // ne egali
#define GTH "PGO"  // pli granda ol
#define LTH "MGO"  // malpli granda ol
#define JMP "SAL"  // salti
#define JCN "SKN"  // salti kondiĉe
#define JSR "SRR"  // salti rezervi revenon
#define STH "REZ"  // rezervi
#define LDZ "ŜAN"  // ŝargi nulon (paĝo)
#define STZ "KON"  // konservi nulon (paĝo)
#define LDR "ŜAR"  // ŝargi relative
#define STR "KOR"  // konservi relative
#define LDA "ŜAA"  // ŝargi absolute
#define STA "KOA"  // konservi absolute
#define DEI "END"  // enirilaj dispozitivoj
#define DEO "ELD"  // elirilaj dispozitivoj
#define ADD "ADI"  // adicii
#define SUB "SUB"  // subtrahi
#define MUL "MUL"  // multipliki
#define DIV "DIV"  // dividi
#define AND "KBO"  // kaj bitope
#define ORA "ABO"  // aŭ bitope
#define EOR "EKA"  // ekskluziva aŭ
#define SFT "ŜOV"  // ŝovi
#define ERROR_ASM "%s: %s ĉe @%s, %s:%d.\n"
#define RETURN_MODE 'r'  // reveni
#define KEEP_MODE 'k'  // konservi
#define COMMENT_INCOMPLETE "Komentario nekompleta"
#define TOKEN_TOO_LONG "Simbolaĵo tro longa"
#define MACROS_LIMIT_EXCEEDED "Limigo de makroj superita"
#define MACRO_IS_INVALID "Makro nevalida"
#define MACRO_IS_DUPLICATE "Makro duobla"
#define MACRO_NESTED "Makro ennesta"
#define LABELS_LIMIT_EXCEEDED "Limigo de etikedoj superita"
#define LABEL_INVALID "Etikedo nevalida"
#define LABEL_DUPLICATE "Etikedo duobla"
#define REFERENCES_LIMIT_EXCEEDED "Limigo de referencoj superita"
#define PADDING_INVALID "Fadeno nevalida"
#define WRITING_ZERO_PAGE "Skribado nul-paĝe"
#define WRITING_OUTSIDE_MEMORY "Skribado ekster la memoro"
#define WRITING_REWIND "Rewind skribado"
#define HEXADECIMAL_INVALID "Deksesuma nevalida"
#define STRING_INVALID "Fadeno nevalida"
#define SOURCE_MISSING "Fonto mankanta"
#define DEPRECATED_RUNE_USE "Uzante malnovan signon %s, uzas =%s\n"
#define INCLUDE_MISSING "Inkluziva mankanta"
#define OUTPUT_EMPTY "Elsendo malplena"
#define LABEL_UNKNOWN "Etikedo nekonata"
#define RELATIVE_REFERENCE_TOO_FAR "Relativa referenco tro malproksima"
#define OUTPUT_FILE_INVALID "Elsendo-dosiero nevalida"
#define UNUSED_LABEL "-- Neuzata etikedo: %s\n"
#define ASSEMBLED_IN_BYTES_USED_LABELS_MACROS "Asamblita %s en %d bajtoj (%.2f%% uzata), %d etikedoj, %d makroj.\n"
#define SYMBOLS_FILE_INVALID "Dosiero de simboloj nevalida"
#define ON_RESET "sur-restarigo"
#define KVRASM_KVARA_ASSEMBLER_DATE "kvrasm - Kvara Asamblilo, 12 apr 2024.\n"
#define USAGE "uzado"
#define EXAMPLE "kvrasm-eo [-v] enigo.kvreo eligo.rom"
