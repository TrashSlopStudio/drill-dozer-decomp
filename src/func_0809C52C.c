#include "types.h"

extern void func_080057F0(u32, u32, u32);

u32 func_0809C52C(u32 a, u8 *p) {
    if (a == p[0x6E])
        return 0;
    func_080057F0(*(u32 *)p, 0, 0);
    p[0x6E] = a;
    return 1;
}
