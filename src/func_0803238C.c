#include "types.h"

extern s32 gUnk_0827C930[];

s32 func_0803238C(s32 a, s32 b) {
    s32 v = gUnk_0827C930[a];
    if (b < (v >> 1)) {
        s32 t = b + 1;
        v -= t;
    }
    return v;
}
