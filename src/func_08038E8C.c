#include "types.h"

s32 func_08038E8C(u32 *a) {
    s32 i = 0;
    u32 *p = a;

    for (; i < 16; i++) {
        if (p[0] == 0)
            return i;
        p += 2;
    }
    return -1;
}
