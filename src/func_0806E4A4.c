#include "types.h"

typedef void (*Fn)(u32, u8 *);
extern Fn gUnk_08340140[];

void func_0806E4A4(u32 a, u8 *b) { gUnk_08340140[b[4]](a, b); }
