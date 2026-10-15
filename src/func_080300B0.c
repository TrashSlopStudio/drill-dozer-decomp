#include "types.h"
s32 func_080300B0(u8 *p) {
    s32 x = *(s32 *)(p + 0x17C);
    if (x < 0)
        return 0;
    if (x > 0)
        return 1;
    return -1;
}
