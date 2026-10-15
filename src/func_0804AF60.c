#include "types.h"

extern u32 gUnk_02035FE8[];

void func_0804AF60(void) {
    s32 p = (s32)gUnk_02035FE8;
    u32 z = 0;
    s32 q = p + 28;

    do {
        *(u32 *)q = z;
        q -= 4;
    } while (q >= p);
}
