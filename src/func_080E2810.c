#include "types.h"

extern void (*gUnk_084AAFF0[])(u32, u8 *);

void func_080E2810(u32 a, u8 *b) { gUnk_084AAFF0[*b](a, b); }
