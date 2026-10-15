#include "types.h"
extern u8 *func_0801AF20(u32, u32);
extern void func_08029060(u32);
void func_08029038(u32 a, u32 *b) {
    u8 *r = func_0801AF20(a, 1);
    b[1] = (u32)r;
    *(u32 *)(r + 0x28) = 0x08248E4C;
    r[3] = 0x7d;
    func_08029060(a);
}
