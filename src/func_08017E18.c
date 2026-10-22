#include "types.h"

extern u8 *func_08011720(u32 a);

void func_08017E18(u32 a, u32 b, u32 c, u32 d, u32 e) {
    u8 *p = func_08011720(a);
    *(u32 *)(p + 0x3F0) = b;
    *(u32 *)(p + 0x3F4) = c;
    *(u32 *)(p + 0x3F8) = d;
    *(u32 *)(p + 0x3FC) = e;
}
