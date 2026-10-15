#include "types.h"

extern s32 func_080F8700(s32, s32);

void func_080B9CFC(s32 *p, s32 a, s32 b) {
    p[2] = a << 8;
    p[3] = func_080F8700(p[2] - p[1], b);
    p[4] = b;
}
