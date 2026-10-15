#include "types.h"

extern void func_08033650(u32 *);

void func_08033970(u8 *a) {
    u32 *p;
    s32 i;

    p = (u32 *)(a + 216);
    i = 2;
    do {
        func_08033650(p);
        p++;
    } while (--i >= 0);
}
