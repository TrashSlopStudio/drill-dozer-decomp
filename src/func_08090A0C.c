#include "types.h"

u32 func_08090A0C(u8 *p) {
    u32 v = *(u32 *)(p + 40) - 4;
    if (v <= 1)
        return 1;
    return 0;
}
