#include "types.h"

extern s32 func_08075DA4(u32, u32);
extern u16 func_08009268(u16);

s32 func_08076264(u32 a, u32 b) {
    s32 r = func_08075DA4(a, b);
    if (r == -1) {
        r = func_08009268(b);
    }
    return r;
}
