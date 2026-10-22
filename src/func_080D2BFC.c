#include "types.h"

extern void func_080D2B9C(u8 *a, u32 b);
extern void func_080D2A68(u8 *a, u32 b, u32 c);

u32 func_080D2BFC(u8 *a, u32 b) {
    u16 *p = (u16 *)(a + 0x60);
    u32 z = 0;
    *p = z;
    *(u32 *)(a + 0x5c) = z;
    func_080D2B9C(a, b);
    func_080D2A68(a, b, 1);
    return 1;
}
