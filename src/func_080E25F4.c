#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_080E25F4(u8 *a, u32 b) {
    u8 *p;
    u8 z;
    func_080057F0(*(u32 *)(a + 0x7C), 0, 0);
    p = a + 0x78;
    z = 0;
    *p = b;
    a[0x79] = z;
}
