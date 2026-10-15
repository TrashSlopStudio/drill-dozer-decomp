#include "types.h"

extern u8 *func_08011720(u32);

void func_0803047C(u32 a, u32 b, u32 c) {
    u8 *p = func_08011720(a);
    *(u32 *)(p + 0x168) = b;
    *(u32 *)(p + 0x16C) = c;
}
