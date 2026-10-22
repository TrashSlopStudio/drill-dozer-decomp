#include "types.h"
extern void func_0801BF48(u8 *, u32);
extern void func_08005560(u32);
void func_08061AE0(u8 *a) {
    u32 *p = (u32 *)(a + 0x7C);
    u8 *q = a + 0x84;
    s32 i = 1;
    do {
        func_0801BF48(q, *p);
        func_08005560(*p++);
        q += 8;
        i--;
    } while (i >= 0);
}
