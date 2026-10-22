#include "types.h"
extern void func_0801AEF0(u8 *, u32);
void func_080D6468(u8 *p, s32 x) {
    u8 *q = p + 0x7c;
    if ((q[16] & 1) == 0) {
        *(u32 *)(p + 0x28) = *(u32 *)(p + 0x24);
        *(s16 *)(p + 0x26) = x >> 16;
        func_0801AEF0(p, *(u32 *)q);
    }
}
