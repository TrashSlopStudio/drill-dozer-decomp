#include "types.h"

u32 func_08045104(u32 a, u8 *p, s32 b) {
    if (((s8 *)p)[9] == 1) {
        if (b == 1)
            goto yes;
    } else if (b == 0) {
        goto yes;
    }
    return 0;
yes:
    return 1;
}
