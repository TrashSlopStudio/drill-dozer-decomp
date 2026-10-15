#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_080214FC(u8 *p, u32 a, u32 b) { func_080057F0(*(u32 *)(p + 0x2AC), (u8)a, (u8)b); }
