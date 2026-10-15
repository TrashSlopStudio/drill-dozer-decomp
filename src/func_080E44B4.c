#include "types.h"

void func_080E44B4(u8 *p) {
    if (p[8] == 0)
        p[5] = 17;
    else
        p[5] = 16;
    p[5] -= p[6];
}
