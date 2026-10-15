#include "types.h"
void func_0804B96C(u8 *p) {
    s32 x = p[4];
    if (x > 12)
        p[5] = 3;
    else if (x > 6)
        p[5] = 2;
    else if (x > 0)
        p[5] = 1;
    else
        p[5] = 0;
}
