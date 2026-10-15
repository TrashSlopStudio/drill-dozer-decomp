#include "types.h"

extern void func_08019DC8(u32, u8, u32);
extern void func_080B351C(u8 *, u32, u32);

void func_080B3630(u8 *p) {
    func_08019DC8(0x10000, 0, 0);
    func_080B351C(p, *(u32 *)(p + 0x3A8), 0);
}
