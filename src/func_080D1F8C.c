#include "types.h"

extern u8 *func_0801B3D4(u32, u32, u32);

void func_080D1F8C(u32 a, u8 *b) {
    u8 *p = func_0801B3D4(a, 11, 0);
    *(u8 **)(b + 8) = p;
    p[3] = 50;
}
