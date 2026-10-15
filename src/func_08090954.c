#include "types.h"

extern void func_0801C128(u32, u32, u32);

u32 func_08090954(u8 *a, u32 b) {
    func_0801C128((u32)a, b, 0);
    a[0x76] = 5;
    *(u16 *)(a + 0x1A) ^= 5;
    return 1;
}
