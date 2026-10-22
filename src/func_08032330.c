#include "types.h"

extern s32 gUnk_0827C930[];

u32 func_08032330(u32 a, s32 b) {
    s32 v = gUnk_0827C930[a];
    if (b < v >> 1) {
        return 0;
    }
    if (b >= v) {
        return 2;
    }
    return 1;
}
