#include "types.h"

extern u32 *gUnk_02036124[];
extern void func_080057F0(u32, u32, u32);

void func_0807CA28(u8 a) {
    u32 *p = gUnk_02036124[a];
    if (p != 0) {
        p[3] = 1;
        func_080057F0(p[1], 0, 0);
    }
}
