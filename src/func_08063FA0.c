#include "types.h"

extern u8 **gUnk_02036048;

void func_08063FA0(u8 a) {
    u8 *p = gUnk_02036048[1];
    if (p != 0)
        p[1] = a;
}
