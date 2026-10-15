#include "types.h"
u32 func_0803DAB0(u8 *a, u32 n) {
    u32 k = n * 4 + 0xCC;
    u32 *p = (u32 *)(k - -(u32)a);
    do {
        p--;
        n--;
        if (*p == 6)
            return 1;
    } while (n != 0);
    return 0;
}
