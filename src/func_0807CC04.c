#include "types.h"

extern u8 **gUnk_02036130;

void func_0807CC04(u8 a) {
    u8 **p = gUnk_02036130;
    if (p != 0)
        p[1][1] = a;
}
