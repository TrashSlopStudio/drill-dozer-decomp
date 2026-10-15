#include "types.h"

extern u8 *func_0807E634(u32);

void func_080F0318(u32 a, u16 b, u16 c) {
    u8 *p = func_0807E634(a);
    *(u16 *)(p + 6) = b;
    *(u16 *)(p + 8) = c;
}
