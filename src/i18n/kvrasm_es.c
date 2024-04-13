#undef BRK
#define BRK "INT"  // interrumpir

#undef LIT
#define LIT "LIT"  // literal

#undef LIT2
#define LIT2 "LIT2"

#undef INC
#define INC "INC"  // incrementar

#undef POP
#define POP "RET"  // retirar

#undef NIP
#define NIP "COR"  // cortar

#undef SWP
#define SWP "CAM"  // cambiar

#undef ROT
#define ROT "ROT"  // rotar

#undef DUP
#define DUP "DUP"  // duplicar

#undef OVR
#define OVR "SOB"  // sobre

#undef EQU
#define EQU "IGU"  // igual

#undef NEQ
#define NEQ "NIG"  // no igual

#undef GTH
#define GTH "MAQ"  // mayor que

#undef LTH
#define LTH "MEQ"  // menor que

#undef JMP
#define JMP "SAL"  // saltar

#undef JCN
#define JCN "SCN"  // saltar condicionalmente

#undef JSR
#define JSR "SRR"  // saltar reservar retorno

#undef STH
#define STH "RES"  // reservar

#undef LDZ
#define LDZ "CAC"  // cargar cero (página) 

#undef STZ
#define STZ "GUC"  // guardar cero (página)

#undef LDR
#define LDR "CAR"  // cargar relativo

#undef STR
#define STR "GUR"  // guardar relativo

#undef LDA
#define LDA "CAA"  // cargar absoluto

#undef STA
#define STA "GUA"  // guardar absoluto

#undef DEI
#define DEI "DIE"  // dispositivo entrada

#undef DEO
#define DEO "DIS"  // dispositivo salida

#undef ADD
#define ADD "SUM"  // sumar

#undef SUB
#define SUB "SUS"  // sustraer

#undef MUL
#define MUL "MUL"  // multiplicar

#undef DIV
#define DIV "DIV"  // dividir

#undef AND
#define AND "YNB"  // y a nivel de bits

#undef ORA
#define ORA "ONB"  // o a nivel de bits

#undef EOR
#define EOR "OEX"  // o exclusivo

#undef SFT
#define SFT "DES"  // desplazar

#undef ERROR_ASM
#define ERROR_ASM "%s: %s en @%s, %s:%d.\n"

#undef RETURN_MODE
#define RETURN_MODE 'r'  // regreso

#undef KEEP_MODE
#define KEEP_MODE 'c'  // copia

#undef COMMENT_INCOMPLETE
#define COMMENT_INCOMPLETE "Comentario incompleto"

#undef TOKEN_TOO_LONG
#define TOKEN_TOO_LONG "Token demasiado largo"

#undef MACROS_LIMIT_EXCEEDED
#define MACROS_LIMIT_EXCEEDED "Límite de macros excedido"

#undef MACRO_IS_INVALID
#define MACRO_IS_INVALID "La macro no es válida"

#undef MACRO_IS_DUPLICATE
#define MACRO_IS_DUPLICATE "La macro es duplicada"

#undef MACRO_NESTED
#define MACRO_NESTED "Macro anidada"

#undef LABELS_LIMIT_EXCEEDED
#define LABELS_LIMIT_EXCEEDED "Límite de etiquetas excedido"

#undef LABEL_INVALID
#define LABEL_INVALID "Etiqueta no válida"

#undef LABEL_DUPLICATE
#define LABEL_DUPLICATE "Etiqueta duplicada"

#undef REFERENCES_LIMIT_EXCEEDED
#define REFERENCES_LIMIT_EXCEEDED "Límite de referencias excedido"

#undef PADDING_INVALID
#define PADDING_INVALID "Padding no válido"

#undef WRITING_ZERO_PAGE
#define WRITING_ZERO_PAGE "Escribiendo en la página cero"

#undef WRITING_OUTSIDE_MEMORY
#define WRITING_OUTSIDE_MEMORY "Escribiendo fuera de la memoria"

#undef WRITING_REWIND
#define WRITING_REWIND "Rebobinando escritura"

#undef HEXADECIMAL_INVALID
#define HEXADECIMAL_INVALID "Hexadecimal no válido"

#undef STRING_INVALID
#define STRING_INVALID "Cadena no válida"

#undef SOURCE_MISSING
#define SOURCE_MISSING "Falta el origen"

#undef DEPRECATED_RUNE_USE
#define DEPRECATED_RUNE_USE "Carácter en desuso %s, usa =%s\n"

#undef INCLUDE_MISSING
#define INCLUDE_MISSING "Falta incluir"

#undef OUTPUT_EMPTY
#define OUTPUT_EMPTY "Salida vacía"

#undef LABEL_UNKNOWN
#define LABEL_UNKNOWN "Etiqueta desconocida"

#undef RELATIVE_REFERENCE_TOO_FAR
#define RELATIVE_REFERENCE_TOO_FAR "Referencia relativa demasiado lejos"

#undef OUTPUT_FILE_INVALID
#define OUTPUT_FILE_INVALID "Archivo de salida no válido"

#undef UNUSED_LABEL
#define UNUSED_LABEL "-- Etiqueta no utilizada: %s\n"

#undef ASSEMBLED_IN_BYTES_USED_LABELS_MACROS
#define ASSEMBLED_IN_BYTES_USED_LABELS_MACROS "Ensamblado %s en %d bytes(%.2f%% usado), %d etiquetas, %d macros.\n"

#undef SYMBOLS_FILE_INVALID
#define SYMBOLS_FILE_INVALID "Archivo de símbolos no válido"

#undef ON_RESET
#define ON_RESET "al reiniciar"

#undef KVRASM_KVARA_ASSEMBLER_DATE
#define KVRASM_KVARA_ASSEMBLER_DATE "kvrasm - Ensamblador Kvara, 12 Abr 2024.\n"

#undef USAGE
#define USAGE "uso"

#undef EXAMPLE
#define EXAMPLE "kvrasm [-v] entrada.kvr salida.rom"
