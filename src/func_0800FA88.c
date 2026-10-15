#include "types.h"

extern void func_080160D4(u32, s16, s16, u8);

void func_0800FA88(u8 *a, s16 *b, u32 c) { func_080160D4(*(u32 *)(a + 0x34), b[0], b[1], c); }
