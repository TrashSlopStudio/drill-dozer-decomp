#include "types.h"

void func_0805AE08(u8 *p, u8 *q) {
    if ((s8)p[84] == 2)
        *(s32 *)(p + 76) = -*(s32 *)(q + 12);
    else
        *(s32 *)(p + 76) = *(s32 *)(q + 12);
    *(s32 *)(p + 80) = *(s32 *)(q + 16);
}
