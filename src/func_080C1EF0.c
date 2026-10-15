#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_080C1EF0(u8 *p, u8 a) {
    if (a > 5)
        a = 0;
    p[0xB3] = a;
    func_080057F0(*(u32 *)(p + 0x7C), 0, 0);
}
