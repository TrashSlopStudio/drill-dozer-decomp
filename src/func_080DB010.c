#include "types.h"

extern u32 func_080DAFAC(u8 *, u32 *);

u32 func_080DB010(u8 *a, u32 *b) {
    s32 v = *(u32 *)(a + 24);
    b[2] = (v >> 8) & 0xFF;
    b[1] = v & 0xFF;
    if (func_080DAFAC(a, b) == 0)
        return 0;
    return 1;
}
