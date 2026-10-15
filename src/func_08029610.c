#include "types.h"

extern u32 func_0801B5D0(u8 *);

u32 func_08029610(u8 *p) {
    u8 *q = p + 124;
    u32 r = func_0801B5D0(p);
    if (r == 2)
        q[4] = 13;
    else if (r == 1)
        q[4] = 7;
    return r;
}
