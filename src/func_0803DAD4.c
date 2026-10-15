#include "types.h"
u32 func_0803DAD4(u8 *a, u32 n) {
    u32 k = n * 4 + 0xCC;
    s32 *p = (s32 *)(k - -(u32)a);
    do {
        p--;
        n--;
        if (*p >= 0)
            if (*p <= 3)
                return 0;
    } while (n != 0);
    return 1;
}
