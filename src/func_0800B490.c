#include "types.h"

u32 func_0800B490(u8 *p, u32 n) {
    u32 i = n - 1;
    if (i > 17)
        return 0;
    if (*(u32 *)(p + 0x98) & (1 << i))
        return 1;
    return 0;
}
