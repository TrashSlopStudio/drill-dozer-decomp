#include "types.h"

void func_080E73C8(u8 *p) {
    s32 v = *(s32 *)(p + 0x7C) + 1;
    *(s32 *)(p + 0x7C) = v;
    if (v > 4)
        *(s32 *)(p + 0x7C) = 4;
}
