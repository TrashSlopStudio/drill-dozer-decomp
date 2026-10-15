#include "types.h"

extern u32 func_08012810(u8);

u32 func_0801C0E4(u8 *p) {
    u8 *q = *(u8 **)(p + 8);
    if (q == 0)
        return 0xFF;
    return func_08012810(q[9]);
}
