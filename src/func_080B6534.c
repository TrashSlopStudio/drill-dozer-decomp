#include "types.h"

u32 func_080B6534(u16 *p) {
    u32 r;
    u16 n = p[6];
    if (n != 0) {
        p[0] += p[4];
        p[1] += p[5];
        p[6] = n - 1;
        r = 0;
    } else {
        p[0] = p[2];
        p[1] = p[3];
        r = 1;
    }
    return r;
}
