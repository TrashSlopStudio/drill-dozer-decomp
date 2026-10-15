#include "types.h"

extern u8 *func_08011720(u32);

void func_08011728(u32 a, u16 *b, u16 *c) {
    u8 *p = func_08011720(a);
    *b = *(u16 *)(p + 0x140);
    *c = *(u16 *)(p + 0x142);
}
