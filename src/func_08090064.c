#include "types.h"
extern u32 func_0800CFA0(u32, s16, s16);
u32 func_08090064(u32 a, s32 *p, s32 dx, s32 dy) {
    p[0] += dx;
    p[1] += dy;
    if (func_0800CFA0(a, *(s16 *)((u8 *)p + 2), *(s16 *)((u8 *)p + 6)) != 0) {
        return 1;
    }
    return 0;
}
