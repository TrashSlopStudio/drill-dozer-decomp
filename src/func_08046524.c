#include "types.h"

extern void func_0801C128(u32, u32, u32);

u32 func_08046524(u8 *a, u32 b) {
    a[0x76] = 5;
    func_0801C128((u32)a, b, 0);
    return 1;
}
