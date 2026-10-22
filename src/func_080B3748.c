#include "types.h"

extern void func_08019DC8(u32, u32, u32);
extern void func_080B351C(u32, u32, u32);

void func_080B3748(u32 a) {
    func_08019DC8(0x20000, 0, 0);
    func_080B351C(a, *(u32 *)(a + 0x3A8), 0);
}
