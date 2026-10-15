#include "types.h"

extern void func_080057F0(u32, u32, u32);

u32 func_08073FC4(u8 *a, u32 *b) {
    u32 r;
    func_080057F0(*b, 0, 0);
    a[0x76] = r = 1;
    return r;
}
