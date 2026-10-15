#include "types.h"

extern void func_0801C128(u8 *, u32, u32);

u32 func_080456E4(u8 *a, u32 b) {
    if (!(a[0xAE] & 1))
        return 0;
    func_0801C128(a, b, 0);
    return 1;
}
