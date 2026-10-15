#include "types.h"

void func_08058E48(u8 *p) {
    if (*(s8 *)(p + 0x54) == 2)
        *(s32 *)(p + 0x4C) = -0x10000;
    else
        *(s32 *)(p + 0x4C) = 0x10000;
    *(s32 *)(p + 0x50) = 0;
}
