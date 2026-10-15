#include "types.h"

void func_080B92D8(u8 *p, u16 x, u16 y) {
    *(u16 *)(p + 8) = x;
    *(u16 *)(p + 10) = y;
    *(s32 *)(p + 0x38) = (s16)x << 8;
    *(s32 *)(p + 0x3C) = (s16)y << 8;
}
