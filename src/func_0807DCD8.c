#include "types.h"

extern u32 gUnk_030019B8[];

void func_0807DCD8(void) {
    s32 p = (s32)gUnk_030019B8;
    u32 z = 0;
    s32 q = p + 8;

    do {
        *(u32 *)q = z;
        q -= 4;
    } while (q >= p);
}
