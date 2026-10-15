#include "types.h"

extern u8 **gUnk_02036124[];

void func_0807CA9C(u8 a, u8 b) {
    u8 **p = gUnk_02036124[a];
    if (p != 0)
        p[1][1] = b;
}
