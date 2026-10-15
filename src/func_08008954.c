#include "types.h"

extern u16 gUnk_02030B30[];

void func_08008954(u16 a, u8 b) {
    u16 *t = gUnk_02030B30;
    t[a] = (u8)t[a] | (b << 8);
}
