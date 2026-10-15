#include "types.h"

s16 func_0806A1C8(s32 a, s32 b, s32 c) {
    s32 d = c - b;
    s32 m = d;
    if (d < 0)
        m = -d;
    if (m > a) {
        if (c > b)
            return a;
        d = -a;
    }
    return d;
}
