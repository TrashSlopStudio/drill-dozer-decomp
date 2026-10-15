#include "types.h"

s32 func_0801ED48(u8 **p) {
    s32 i;
    for (i = 0; i < 4; p++, i++) {
        if (!(*p)[1])
            break;
    }
    if (i == 4)
        return 1;
    return 0;
}
