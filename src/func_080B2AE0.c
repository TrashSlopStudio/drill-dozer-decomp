#include "types.h"

extern u8 *func_080B27D8(u32 a);
extern void func_080057F0(u32, u32, u32);

void func_080B2AE0(u32 a) {
    u8 *p = func_080B27D8(a);
    u32 *q = (u32 *)(p + 0x84);
    int i;
    for (i = 1; i >= 0; i--) {
        func_080057F0(*q++, 0, 0);
    }
    p[0x78] = a;
}
