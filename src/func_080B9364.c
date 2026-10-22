#include "types.h"

extern void func_080B92F4(u8 *, s16, s16, u16);

void func_080B9364(u8 *p, s16 x, s16 y, u16 z) {
    s16 a = (*(s32 *)(p + 0x38) >> 8) + x;
    s16 b = (*(s32 *)(p + 0x3C) >> 8) + y;
    func_080B92F4(p, a, b, z);
}
