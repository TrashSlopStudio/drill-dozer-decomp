#include "types.h"

extern u8 *func_08001728(u32);

void func_0803EC58(u8 *p) {
    u8 *o = func_08001728(88);
    *(u8 **)(p + 0x7C) = o;
    *(u32 *)(o + 0x54) = *(u32 *)(p + 0xC);
    *(u8 **)(o + 0x48) = p;
    *(u32 *)(o + 4) = *(u16 *)(p + 0x18);
}
