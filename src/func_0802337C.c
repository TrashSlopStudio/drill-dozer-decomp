#include "types.h"

extern void func_0800B5D8(u32, u32);

void func_0802337C(u8 *p) {
    u8 *q = p;
    u32 h;
    q += 0x7C;
    if (q[5] == 1) {
        h = *(u16 *)(p + 0x18) >> 8;
        if (h != 0)
            func_0800B5D8(*(u32 *)(p + 0xC), h);
    }
}
