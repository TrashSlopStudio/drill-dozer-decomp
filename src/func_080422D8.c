#include "types.h"
extern void func_080057F0(u32, u32, u32);
void func_080422D8(u8 *p, u32 v) {
    u32 *q = (u32 *)(p + 0x7C);
    s32 i;
    if (v == p[0x78])
        return;
    p[0x78] = v;
    for (i = 0; i < 3; i++)
        func_080057F0(q[i], 0, 0);
}
