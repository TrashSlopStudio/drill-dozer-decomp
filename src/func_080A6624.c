#include "types.h"

extern void func_0801AEF0(u32, u8 *);

void func_080A6624(u32 a, u8 **p) {
    u8 *q = p[0];
    func_0801AEF0(a, p[1]);
    *(u16 *)(p[1] + 0x16) += *(s8 *)(q + 0xB1);
}
