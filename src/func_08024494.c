#include "types.h"

extern void func_08012C08(u16 *a, u8 *b, u32 c, u32 d);

void func_08024494(u8 *a, u8 *b, u16 *c) {
    func_08012C08(c, b, 23, 8);
    c[1]--;
    if (*(u16 *)(a + 22) == 10)
        c[0]--;
}
