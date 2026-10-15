#include "types.h"

s32 func_0802FF7C(u8 *p) {
    s32 v = *(s32 *)(p + 0x160);
    if (v < 0)
        return 2;
    if (v > 0)
        return 3;
    return -1;
}
