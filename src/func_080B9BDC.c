#include "types.h"

void func_080B9BDC(u8 *p, u8 n, u8 v) {
    p[17] = v;
    p[18] = n / 2;
    p[19] = n / 2;
    if (n & 1)
        p[18] = n / 2 + 1;
}
