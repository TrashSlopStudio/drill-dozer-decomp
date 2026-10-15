#include "types.h"

extern s32 func_0801CE10(u8 *);
extern void func_0805AD88(u8 *, u32);

u32 func_0805A530(u8 *p, u32 a) {
    s32 r;
    *(u32 *)(p + 0x4C) = 0;
    r = func_0801CE10(p);
    if (r == 1) {
        p[0x76] = r;
        func_0805AD88(p, a);
    }
    return 1;
}
