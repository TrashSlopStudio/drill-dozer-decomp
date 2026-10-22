#include "types.h"

extern s32 func_0801BC0C(u32 *, u32);

s32 func_080EB49C(u8 *a) {
    u32 x;
    s32 i = 0;
    x = 0;
    while (func_0801BC0C(&x, 140)) {
        i++;
    }
    return a[5] - i;
}
