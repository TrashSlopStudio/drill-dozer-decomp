#include "types.h"

extern void func_0801AEF0(u32, u32);

void func_080290D0(u32 a, u32 *b) {
    u8 *p = (u8 *)b[0] + 124;
    func_0801AEF0(a, b[1]);
    *(u16 *)(b[1] + 22) += *(s8 *)(p + 28);
}
