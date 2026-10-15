#include "types.h"
s32 func_0802FFA0(u8 *p) {
    s32 v = *(s32 *)(p + 0x164);
    if (v < 0)
        return 0;
    if (v > 0)
        return 1;
    return -1;
}
