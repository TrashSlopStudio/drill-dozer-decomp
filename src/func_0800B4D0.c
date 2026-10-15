#include "types.h"

u32 func_0800B4D0(u8 *p, u32 n) {
    if (n - 1 > 17)
        return 0;
    if (*(u32 *)(p + 0x9C) & (1 << (n - 1)))
        return 1;
    return 0;
}
