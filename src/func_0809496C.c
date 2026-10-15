#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_0809496C(u8 *p, u32 *q, u32 c) {
    if (p[120] != c) {
        if (*q != 0) {
            func_080057F0(*q, 0, 0);
        }
        p[120] = c;
    }
}
