#define OPCODE_LENGTH 4
#define BRK "INT"  // interrumpir
#define LIT "LIT"  // literal
#define LIT2 "LIT2"
#define INC "INC"  // incrementar
#define POP "RET"  // retirar
#define NIP "COR"  // cortar
#define SWP "CAM"  // cambiar
#define ROT "ROT"  // rotar
#define DUP "DUP"  // duplicar
#define OVR "SOB"  // sobre
#define EQU "IGU"  // igual
#define NEQ "NIG"  // no igual
#define GTH "MAQ"  // mayor que
#define LTH "MEQ"  // menor que
#define JMP "SAL"  // saltar
#define JCN "SCN"  // saltar condicionalmente
#define JSR "SRR"  // saltar reservar regreso
#define STH "RES"  // reservar
#define LDZ "CAC"  // cargar cero (página) 
#define STZ "GUC"  // guardar cero (página)
#define LDR "CAR"  // cargar relativo
#define STR "GUR"  // guardar relativo
#define LDA "CAA"  // cargar absoluto
#define STA "GUA"  // guardar absoluto
#define DEI "DIE"  // dispositivo entrada
#define DEO "DIS"  // dispositivo salida
#define ADD "SUM"  // sumar
#define SUB "SUS"  // sustraer
#define MUL "MUL"  // multiplicar
#define DIV "DIV"  // dividir
#define AND "YNB"  // y a nivel de bits
#define ORA "ONB"  // o a nivel de bits
#define EOR "OEX"  // o a nivel de bits exclusivo
#define SFT "DES"  // desplazar
#define ERROR_ASM "%s: %s en @%s, %s:%d.\n"
#define RETURN_MODE 'r'  // regreso
#define KEEP_MODE 'c'  // copia
#define COMMENT_INCOMPLETE "Comentario incompleto"
#define TOKEN_TOO_LONG "Token demasiado largo"
#define MACROS_LIMIT_EXCEEDED "Límite de macros excedido"
#define MACRO_IS_INVALID "La macro no es válida"
#define MACRO_IS_DUPLICATE "La macro es duplicada"
#define MACRO_NESTED "Macro anidada"
#define LABELS_LIMIT_EXCEEDED "Límite de etiquetas excedido"
#define LABEL_INVALID "Etiqueta no válida"
#define LABEL_DUPLICATE "Etiqueta duplicada"
#define REFERENCES_LIMIT_EXCEEDED "Límite de referencias excedido"
#define PADDING_INVALID "Padding no válido"
#define WRITING_ZERO_PAGE "Escribiendo en la página cero"
#define WRITING_OUTSIDE_MEMORY "Escribiendo fuera de la memoria"
#define WRITING_REWIND "Rebobinando escritura"
#define HEXADECIMAL_INVALID "Hexadecimal no válido"
#define STRING_INVALID "Cadena no válida"
#define SOURCE_MISSING "Falta el origen"
#define DEPRECATED_RUNE_USE "Carácter en desuso %s, usa =%s\n"
#define INCLUDE_MISSING "Falta incluir"
#define OUTPUT_EMPTY "Salida vacía"
#define LABEL_UNKNOWN "Etiqueta desconocida"
#define RELATIVE_REFERENCE_TOO_FAR "Referencia relativa demasiado lejos"
#define OUTPUT_FILE_INVALID "Archivo de salida no válido"
#define UNUSED_LABEL "-- Etiqueta no utilizada: %s\n"
#define ASSEMBLED_IN_BYTES_USED_LABELS_MACROS "Ensamblado %s en %d bytes(%.2f%% usado), %d etiquetas, %d macros.\n"
#define SYMBOLS_FILE_INVALID "Archivo de símbolos no válido"
#define ON_RESET "al reiniciar"
#define KVRASM_KVARA_ASSEMBLER_DATE "kvrasm - Ensamblador Kvara, 12 Abr 2024.\n"
#define USAGE "uso"
#define EXAMPLE "kvrasm-es [-v] entrada.kvres salida.rom"
