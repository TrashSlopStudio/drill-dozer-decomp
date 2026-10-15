#include "types.h"

u32 func_080123C8(u8 *a, u32 b, u8 *c) {
    u32 v = *(u16 *)(a + 6);
    if (c[2] == 1) {
        v >>= 8;
    } else if (c[2] == 2) {
        v &= 0xFF;
    }
    if (v == *(u16 *)c) {
        return 1;
    }
    return 0;
}
