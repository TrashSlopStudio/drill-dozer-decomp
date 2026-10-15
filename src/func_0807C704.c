#include "types.h"

extern u8 **gUnk_0203611C[];

void func_0807C704(u8 a, u8 b) {
    u8 **p = gUnk_0203611C[a];
    if (p != 0)
        p[3][1] = b;
}
