// Translation notes:
// - Return stack is "poki" (container)
// - Bits are "lili
#define OPCODE_LENGTH  4
#define BRK "PIN" // pini
#define LIT "NAN" // nanpa
#define LIT2 "NAN2"
#define INC "MUT" // mute
#define POP "WEK" // weka
#define NIP "WKP" // weka poka
#define SWP "ANT" // ante
#define ROT "SIK" // sike
#define DUP "KIN" // kin
#define OVR "KNP" // kin poka
#define EQU "SAM" // sama
#define NEQ "ALA" // (sama) ala
#define GTH "SEW" // sewi
#define LTH "LIL" // lili
#define JMP "TAW" // tawa
#define JCN "TWK" // tawa ken
#define JSR "TWP" // tawa poki
#define STH "POK" // poki
#define LDZ "LKL" // lukin lili
#define STZ "STL" // sitelen lili
#define LDR "LKP" // lukin poka
#define STR "STP" // sitelen poka
#define LDA "LUK" // lukin
#define STA "SIT" // sitelen
#define DEI "KUT" // kute
#define DEO "TOK" // toki
#define ADD "NSI" // nanpa sin
#define SUB "NWE" // nanpa weka
#define MUL "NKU" // nanpa kulupu
#define DIV "NKI" // nanpa kipisi
#define AND "LAL" // lili ale
#define ORA "LAN" // lili anu
#define EOR "LWA" // lili wan
#define SFT "LTA" // lili tawa
#define ERROR_ASM "%s: %s in @%s, %s:%d.\n"
#define RETURN_MODE 'p' // poki
#define KEEP_MODE 'a'   // awen
#define COMMENT_INCOMPLETE "toki sona li ale ala"
#define TOKEN_TOO_LONG "nimi li sewi ike"
#define MACROS_LIMIT_EXCEEDED "nimi kulupu li mute ike"
#define MACRO_IS_INVALID "nimi kulupu li pakala"
#define MACRO_IS_DUPLICATE "nimi kulupu li nimi sama"
#define MACRO_NESTED "nimi kulupu li insa nimi kulupu"
#define LABELS_LIMIT_EXCEEDED "nimi li mute ike"
#define LABEL_INVALID "nimi li pakala"
#define LABEL_DUPLICATE "nimi li sama"
#define REFERENCES_LIMIT_EXCEEDED "nimi pi nimi weka li mute ike"
#define PADDING_INVALID "sitelen pi sona ala li pakala"
#define WRITING_ZERO_PAGE "sitelen pi sona lili"
#define WRITING_OUTSIDE_MEMORY "sitelen pi sona mute ike"
#define WRITING_REWIND "sitelen pi sona monsi"
#define HEXADECIMAL_INVALID "nanpa li pakala"
#define STRING_INVALID "nimi toki li pakala"
#define SOURCE_MISSING "lipu open li weka"
#define DEPRECATED_RUNE_USE "%s li ike, =%s li pona\n"
#define INCLUDE_MISSING "lipu open kin li weka"
#define OUTPUT_EMPTY "lipu pini li jo sona ala"
#define LABEL_UNKNOWN "nimi li sona ala"
#define RELATIVE_REFERENCE_TOO_FAR "nimi pi nimi weka li weka mute ike"
#define OUTPUT_FILE_INVALID "lipu pini li pakala"
#define UNUSED_LABEL "-- nimi ni li pali ala: %s\n"
#define ASSEMBLED_IN_BYTES_USED_LABELS_MACROS "%s li pali li jo %d kipisi nanpa(%.2f%%), %d nimi, %d nimi kulupu.\n"
#define SYMBOLS_FILE_INVALID "lipu nimi li pakala"
#define ON_RESET "open-la"
#define KVRASM_KVARA_ASSEMBLER_DATE "kvrasm - ilo Kuwala pi toki ilo, 12 Apr 2024.\n"
#define USAGE "nasin pali"
#define EXAMPLE "kvrasm-tok [-v] open.kvrtok pini.rom"
