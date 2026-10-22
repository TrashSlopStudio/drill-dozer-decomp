#include "types.h"

extern void func_080ABF00(u32, u32);

u32 func_080AD0D0(s32 *p) {
    *(u16 *)(p[7] + 36) -= 2;
    p[2] -= 2;
    if (p[2] <= -112) {
        p[0] = 11;
        func_080ABF00(*(volatile s32 *)&p[7], 7);
    }
    return 0;
}
