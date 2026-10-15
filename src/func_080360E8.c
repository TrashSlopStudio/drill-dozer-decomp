#include "types.h"
s32 func_080360E8(u32 a, u32 b) {
    s32 i = 0;
    u32 x = b & 0xFF;
    do {
        if (x & 1)
            break;
        x >>= 1;
        i++;
    } while (i <= 7);
    return i;
}
