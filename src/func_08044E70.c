#include "types.h"

void func_08044E70(u8 *p, u32 a, u32 b, u32 c, u32 d) {
    p[11] = b;
    p[15] = a;
    p[8] = d;
    if (c == 0)
        c = 3;
    p[14] = c;
}
