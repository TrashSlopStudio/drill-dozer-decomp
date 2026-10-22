#include "types.h"

extern s32 func_0801CE10(void);
extern void func_08058E70(u8 *, u8 *);

u32 func_080583A8(u8 *p, u8 *q) {
    s32 r;
    *(u32 *)(p + 76) = 0;
    r = func_0801CE10();
    if (r == 1) {
        q[3] = 0;
        *(u16 *)(q + 4) = 29;
        p[118] = r;
        func_08058E70(p, q);
    }
    return 1;
}
