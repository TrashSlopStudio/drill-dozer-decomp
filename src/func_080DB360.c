#include "types.h"

extern void func_080DB768(void *, u32);

void func_080DB360(u8 *p, u16 *src) {
    u32 *q = (u32 *)(p + 0x7c);
    q[1] = *src >> 8;
    q[3] = *src & 0xff;
    *(u32 *)(p + 0x7c) = 0;
    q[5] = 1;
    *(u16 *)(p + 0x1a) &= 0xfff0;
    func_080DB768(p, q[1]);
}
