#include "types.h"

extern void func_0801C128(u32, u32, u32);

u32 func_0807429C(u8 *a, u32 b) {
    func_0801C128((u32)a, b, 0);
    a[0x76] = 2;
    return 1;
}
