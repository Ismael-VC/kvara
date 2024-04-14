#define LANG_DEFAULT

// kvrasm assembler Esperanto translations.
#ifdef LANG_EO
	#undef LANG_DEFAULT
	#include "kvrasm_eo.c"
#endif

// kvrasm assembler Spanish translations.
#ifdef LANG_ES
	#undef LANG_DEFAULT
	#include "kvrasm_es.c"
#endif

// kvrasm assembler toki pona translations.
#ifdef LANG_TOK
	#undef LANG_DEFAULT
	#include "kvrasm_tok.c"
#endif

// kvrasm assembler toki pona translations.
#ifdef LANG_DEFAULT
	#include "kvrasm_en.c"
#endif
