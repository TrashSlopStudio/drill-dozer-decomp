#include "types.h"

u32 func_080C966C(s32 *a, u8 *b) {
    s32 v = a[2];
    u32 r;
    u8 x;
    if (v == -1) {
        r = 0;
    } else {
        x = 3;
        if (v == 2)
            x = 1;
        b[1] = x;
        r = 1;
        b[0] = r;
    }
    return r;
}
