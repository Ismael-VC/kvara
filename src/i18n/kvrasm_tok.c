// Translation notes:
// - Return stack is "poki" (container)
// - Bits are "lili"
#undef BRK
#define BRK "PIN" // pini

#undef LIT
#define LIT "NAN" // nanpa

#undef LIT2
#define LIT2 "NAN2"

#undef INC
#define INC "MUT" // mute

#undef POP
#define POP "WEK" // weka

#undef NIP
#define NIP "WKP" // weka poka

#undef SWP
#define SWP "ANT" // ante

#undef ROT
#define ROT "SIK" // sike

#undef DUP
#define DUP "KIN" // kin

#undef OVR
#define OVR "KNP" // kin poka

#undef EQU
#define EQU "SAM" // sama

#undef NEQ
#define NEQ "ALA" // (sama) ala

#undef GTH
#define GTH "SEW" // sewi

#undef LTH
#define LTH "LIL" // lili

#undef JMP
#define JMP "TAW" // tawa

#undef JCN
#define JCN "TWK" // tawa ken

#undef JSR
#define JSR "TWP" // tawa poki

#undef STH
#define STH "POK" // poki

#undef LDZ
#define LDZ "LKL" // lukin lili

#undef STZ
#define STZ "STL" // sitelen lili

#undef LDR
#define LDR "LKP" // lukin poka

#undef STR
#define STR "STP" // sitelen poka

#undef LDA
#define LDA "LUK" // lukin

#undef STA
#define STA "SIT" // sitelen

#undef DEI
#define DEI "KUT" // kute

#undef DEO
#define DEO "TOK" // toki

#undef ADD
#define ADD "NSI" // nanpa sin

#undef SUB
#define SUB "NWE" // nanpa weka

#undef MUL
#define MUL "NKU" // nanpa kulupu

#undef DIV
#define DIV "NKI" // nanpa kipisi

#undef AND
#define AND "LAL" // lili ale

#undef ORA
#define ORA "LAN" // lili anu

#undef EOR
#define EOR "LWA" // lili wan

#undef SFT
#define SFT "LTA" // lili tawa

#undef ERROR_ASM
#define ERROR_ASM "%s: %s in @%s, %s:%d.\n"

#undef RETURN_MODE
#define RETURN_MODE 'p' // poki

#undef KEEP_MODE
#define KEEP_MODE 'a'   // awen

#undef COMMENT_INCOMPLETE
#define COMMENT_INCOMPLETE "toki sona li ale ala"

#undef TOKEN_TOO_LONG
#define TOKEN_TOO_LONG "nimi li sewi ike"

#undef MACROS_LIMIT_EXCEEDED
#define MACROS_LIMIT_EXCEEDED "nimi kulupu li mute ike"

#undef MACRO_IS_INVALID
#define MACRO_IS_INVALID "nimi kulupu li pakala"

#undef MACRO_IS_DUPLICATE
#define MACRO_IS_DUPLICATE "nimi kulupu li nimi sama"

#undef MACRO_NESTED
#define MACRO_NESTED "nimi kulupu li insa nimi kulupu"

#undef LABELS_LIMIT_EXCEEDED
#define LABELS_LIMIT_EXCEEDED "nimi li mute ike"

#undef LABEL_INVALID
#define LABEL_INVALID "nimi li pakala"

#undef LABEL_DUPLICATE
#define LABEL_DUPLICATE "nimi li sama"

#undef REFERENCES_LIMIT_EXCEEDED
#define REFERENCES_LIMIT_EXCEEDED "nimi pi nimi weka li mute ike"

#undef PADDING_INVALID
#define PADDING_INVALID "sitelen pi sona ala li pakala"

#undef WRITING_ZERO_PAGE
#define WRITING_ZERO_PAGE "sitelen pi sona lili"

#undef WRITING_OUTSIDE_MEMORY
#define WRITING_OUTSIDE_MEMORY "sitelen pi sona mute ike"

#undef WRITING_REWIND
#define WRITING_REWIND "sitelen pi sona monsi"

#undef HEXADECIMAL_INVALID
#define HEXADECIMAL_INVALID "nanpa li pakala"

#undef STRING_INVALID
#define STRING_INVALID "nimi toki li pakala"

#undef SOURCE_MISSING
#define SOURCE_MISSING "lipu open li weka"

#undef DEPRECATED_RUNE_USE
#define DEPRECATED_RUNE_USE "%s li ike, =%s li pona\n"

#undef INCLUDE_MISSING
#define INCLUDE_MISSING "lipu open kin li weka"

#undef OUTPUT_EMPTY
#define OUTPUT_EMPTY "lipu pini li jo sona ala"

#undef LABEL_UNKNOWN
#define LABEL_UNKNOWN "nimi li sona ala"

#undef RELATIVE_REFERENCE_TOO_FAR
#define RELATIVE_REFERENCE_TOO_FAR "nimi pi nimi weka li weka mute ike"

#undef OUTPUT_FILE_INVALID
#define OUTPUT_FILE_INVALID "lipu pini li pakala"

#undef UNUSED_LABEL
#define UNUSED_LABEL "-- nimi ni li pali ala: %s\n"

#undef ASSEMBLED_IN_BYTES_USED_LABELS_MACROS
#define ASSEMBLED_IN_BYTES_USED_LABELS_MACROS "%s li pali li jo %d kipisi nanpa(%.2f%%), %d nimi, %d nimi kulupu.\n"

#undef SYMBOLS_FILE_INVALID
#define SYMBOLS_FILE_INVALID "lipu nimi li pakala"

#undef ON_RESET
#define ON_RESET "open-la"

#undef KVRASM_KVARA_ASSEMBLER_DATE
#define KVRASM_KVARA_ASSEMBLER_DATE "kvrasm - ilo Kuwala pi toki ilo, 12 Apr 2024.\n"

#undef USAGE
#define USAGE "nasin pali"

#undef EXAMPLE
#define EXAMPLE "kvrasm-tok [-v] open.kvrtok pini.rom"
