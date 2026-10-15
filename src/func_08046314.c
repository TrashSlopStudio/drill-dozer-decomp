#include "types.h"

extern void func_0801C128(u8 *, u32, u32);

u32 func_08046314(u8 *p, u32 a) {
    u8 *q = p + 0x7C;
    if (q[5] != 2)
        return 0;
    func_0801C128(p, a, 0);
    return 1;
}
