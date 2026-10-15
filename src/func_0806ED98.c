#include "types.h"

extern void func_0802140C(u32, u32);

u32 func_0806ED98(u8 *a, u8 *b) {
    if (*(u32 *)(b + 8) != 0) {
        b[0] = 1;
        func_0802140C(*(u32 *)(a + 12), b[3]);
    }
    return 1;
}
