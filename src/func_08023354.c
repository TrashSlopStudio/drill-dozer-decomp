#include "types.h"

extern u32 func_0801B5E0(u8 *);

u32 func_08023354(u8 *p) {
    u8 *q = p + 124;
    if (q[4] == 0 && func_0801B5E0(p) == 1)
        q[4]++;
    return 0;
}
