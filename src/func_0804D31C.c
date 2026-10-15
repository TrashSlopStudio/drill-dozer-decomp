#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_08005560(u32);

void func_0804D31C(u8 *a) {
    u32 *p;
    u8 *q;
    s32 i;

    p = (u32 *)(a + 0x7C);
    q = a + 0x84;
    i = 1;
    do {
        func_0801BF48(q, *p);
        func_08005560(*p++);
        q += 8;
    } while (--i >= 0);
}
