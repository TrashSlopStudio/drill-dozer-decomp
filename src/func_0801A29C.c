#include "types.h"

u32 func_0801A29C(u8 *p) {
    u8 *q = p + 20;
    if (q[2] == 120)
        return 1;
    q[2]++;
    return 0;
}
