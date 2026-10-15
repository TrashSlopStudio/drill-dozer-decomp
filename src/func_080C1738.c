#include "types.h"

void func_080C1738(u8 *p, u8 a, u8 b) {
    if (p[14] != 0) {
        u8 z = 0;
        p[19] = 1;
        p[20] = z;
        p[22] = z;
        p[21] = b;
        p[23] = a;
    }
}
