#include "types.h"

void func_080BBC3C(u8 *p, u8 a, u8 b) {
    u8 h;
    p[17] = b;
    h = a >> 1;
    p[18] = h;
    p[19] = h;
    if (a & 1)
        p[18] = h + 1;
}
