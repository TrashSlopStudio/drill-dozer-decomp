#include "types.h"

s32 func_0803008C(u8 *p) {
    s32 v = *(s32 *)(p + 0x178);
    if (v < 0)
        return 2;
    if (v > 0)
        return 3;
    return -1;
}
