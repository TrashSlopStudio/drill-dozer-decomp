#include "types.h"

extern u32 func_0801B670(u8 *);
extern void func_080D2A68(u8 *, u8 *, u32);

u32 func_080D3158(u8 *p) {
    u8 *q = p + 0x7C;
    u32 r = func_0801B670(p);
    if (r == 2)
        func_080D2A68(p, q, 5);
    return r;
}
