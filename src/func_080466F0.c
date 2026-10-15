#include "types.h"

extern int func_0801CE10(u8 *);

u32 func_080466F0(u8 *a) {
    *(u32 *)(a + 0x4C) = 0;
    if (func_0801CE10(a) == 1) {
        u8 *p = a + 0x77;
        u8 t = *p;
        *(p - 1) = t;
    }
    return 0;
}
