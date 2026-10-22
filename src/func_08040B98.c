#include "types.h"

extern s32 func_0801B670(u8 *p);
extern void func_080411BC(u8 *p, u8 *q, u32 n);

s32 func_08040B98(u8 *p) {
    u8 *q = p + 0x7C;
    s32 r = func_0801B670(p);
    if (r == 2) {
        p[0x73] = 1;
        func_080411BC(p, q, 7);
    }
    return r;
}
