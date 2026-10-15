#include "types.h"

extern u32 func_0801B670(u8 *);

u32 func_08029634(u8 *p) {
    u8 *q = p + 0x7C;
    u32 r = func_0801B670(p);
    if (r == 2)
        q[4] = 13;
    else if (r == 1)
        q[4] = 7;
    return r;
}
