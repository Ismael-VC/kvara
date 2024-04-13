// Default kvrasm assembler English strings.
#define BRK "BRK"
#define LIT "LIT"
#define LIT2 "LIT2"
#define INC "INC"
#define POP "POP"
#define NIP "NIP"
#define SWP "SWP"
#define ROT "ROT"
#define DUP "DUP"
#define OVR "OVR"
#define EQU "EQU"
#define NEQ "NEQ"
#define GTH "GTH"
#define LTH "LTH"
#define JMP "JMP"
#define JCN "JCN"
#define JSR "JSR"
#define STH "STH"
#define LDZ "LDZ"
#define STZ "STZ"
#define LDR "LDR"
#define STR "STR"
#define LDA "LDA"
#define STA "STA"
#define DEI "DEI"
#define DEO "DEO"
#define ADD "ADD"
#define SUB "SUB"
#define MUL "MUL"
#define DIV "DIV"
#define AND "AND"
#define ORA "ORA"
#define EOR "EOR"
#define SFT "SFT"
#define ERROR_ASM "%s: %s in @%s, %s:%d.\n"
#define RETURN_MODE 'r'
#define KEEP_MODE 'k'
#define COMMENT_INCOMPLETE "Comment incomplete"
#define TOKEN_TOO_LONG "Token too long"
#define MACROS_LIMIT_EXCEEDED "Macros limit exceeded"
#define MACRO_IS_INVALID "Macro is invalid"
#define MACRO_IS_DUPLICATE "Macro is duplicate"
#define MACRO_NESTED "Macro nested"
#define LABELS_LIMIT_EXCEEDED "Labels limit exceeded"
#define LABEL_INVALID "Label invalid"
#define LABEL_DUPLICATE "Label duplicate"
#define REFERENCES_LIMIT_EXCEEDED "References limit exceeded"
#define PADDING_INVALID "Padding invalid"
#define WRITING_ZERO_PAGE "Writing zero-page"
#define WRITING_OUTSIDE_MEMORY "Writing outside memory"
#define WRITING_REWIND "Writing rewind"
#define HEXADECIMAL_INVALID "Hexadecimal invalid"
#define STRING_INVALID "String invalid"
#define SOURCE_MISSING "Source missing"
#define DEPRECATED_RUNE_USE "Deprecated rune %s, use =%s\n"
#define INCLUDE_MISSING "Include missing"
#define OUTPUT_EMPTY "Output empty"
#define LABEL_UNKNOWN "Label unknown"
#define RELATIVE_REFERENCE_TOO_FAR "Relative reference too far"
#define OUTPUT_FILE_INVALID "Output file invalid"
#define UNUSED_LABEL "-- Unused label: %s\n"
#define ASSEMBLED_IN_BYTES_USED_LABELS_MACROS "Assembled %s in %d bytes(%.2f%% used), %d labels, %d macros.\n"
#define SYMBOLS_FILE_INVALID "Symbols file invalid"
#define ON_RESET "on-reset"
#define KVRASM_KVARA_ASSEMBLER_DATE "kvrasm - Kvara Assembler, 12 Apr 2024.\n"
#define USAGE "usage"
#define EXAMPLE "kvrasm [-v] input.kvr output.rom"


// kvrasm assembler Esperanto translations.
#ifdef LANG_EO
	#include "kvrasm_eo.c"
#endif

// kvrasm assembler Spanish translations.
#ifdef LANG_ES
	#include "kvrasm_es.c"
#endif

// kvrasm assembler toki pona translations.
#ifdef LANG_TOK
	#include "kvrasm_tok.c"
#endif
