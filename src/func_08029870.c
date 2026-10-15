#include "types.h"

extern void func_0801C128(u8 *, u32, u32);
extern void func_0801C17C(u8 *);

u32 func_08029870(u8 *a, u32 b) {
    u8 *q = a + 0x7C;
    func_0801C128(a, b, 0);
    q[4] = 0;
    func_0801C17C(a);
    return 1;
}
