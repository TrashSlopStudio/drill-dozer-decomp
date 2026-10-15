#include "types.h"

u8 func_0801C084(u8 **p, u32 i) {
    u8 *q = p[2];
    if (q == 0)
        return 0;
    q += 2;
    return q[i];
}
