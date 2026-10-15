#include "types.h"
extern void func_0801C128(u8 *, u32, u32);
u32 func_080CC684(u8 *a, u32 b) {
    u32 r;
    if (*(s16 *)(a + 0x56) > 0) {
        func_0801C128(a, b, 0);
        r = 1;
    } else {
        r = 0;
    }
    return r;
}
