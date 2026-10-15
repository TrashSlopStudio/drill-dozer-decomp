#include "types.h"

extern u8 **gUnk_020391EC;

void func_080E4864(u32 v) {
    u8 **p = gUnk_020391EC;
    if (p != 0)
        p[1][1] = v;
}
