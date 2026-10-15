#include "types.h"

extern u32 func_08090A0C(u8 *);
extern void func_0801C128(u8 *, u32, u32);

u32 func_0809107C(u8 *a, u32 b) {
    if (func_08090A0C(a + 124) != 0)
        return 0;
    func_0801C128(a, b, 0);
    return 1;
}
