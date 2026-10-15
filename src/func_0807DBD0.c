#include "types.h"

extern u8 *gUnk_030019B8[];

void func_0807DBD0(u32 a) {
    u8 *p = gUnk_030019B8[a];
    if (p != 0) {
        u8 z = 0;
        p[28] = 2;
        p[29] = z;
        p[30] = z;
    }
}
