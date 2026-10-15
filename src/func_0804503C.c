#include "types.h"

void func_0804503C(u32 a, u8 *p, u8 b, u8 c, u16 d, u16 e, u8 f) {
    p[11] = 0;
    p[9] = b;
    p[10] = c;
    *(u16 *)(p + 4) = d;
    *(u16 *)(p + 6) = e;
    p[16] = f;
    p[14] = 3;
}
