#include "types.h"

void func_0802FEE4(u8 *p, s32 v, s32 m) {
    if (m == 2 && v > 0)
        v = -v;
    *(u32 *)(p + 0x160) = 0;
    *(s16 *)(p + 0x162) = v;
}
