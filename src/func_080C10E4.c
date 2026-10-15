#include "types.h"

void func_080C10E4(u8 *p) {
    if (p[0x40]) {
        u32 z;
        p[0x41] = (z = 0, 1);
        p[0x42] = z;
        *(u16 *)(p + 0x3E) = z;
    }
}
