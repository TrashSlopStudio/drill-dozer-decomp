#include "types.h"

extern void func_0801B064(u32 a);

void func_080AE960(u8 *a) {
    u32 *p;
    s32 i;

    p = (u32 *)(a + 0x7C);
    i = 3;
    do {
        if (*p != 0)
            func_0801B064(*p);
        p++;
    } while (--i >= 0);
}
