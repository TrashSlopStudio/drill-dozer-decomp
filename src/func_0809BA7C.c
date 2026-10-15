#include "types.h"

extern void func_0801C128(u8 *, u32, u32);

u32 func_0809BA7C(u8 *p, u32 a) {
    u8 b = p[0xEB] & 2;
    func_0801C128(p, a, b != 0);
    return 1;
}
