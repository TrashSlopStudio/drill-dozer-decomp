#include "types.h"

void func_080057F0(u8 *p, u8 a, u8 b) {
    u8 z = 0;
    p[8] = a;
    p[9] = z;
    p[10] = b;
    p[14] = z;
    p[15] = 1;
    if (b == 0)
        p[15] = 3;
}
