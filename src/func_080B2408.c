#include "types.h"

extern u32 func_0801B61C(u32, u32);

u32 func_080B2408(u8 *p) {
    u32 r = func_0801B61C((u32)p, 0xFFFE);

    if (r == 2)
        p[118] = r;
    return r;
}
