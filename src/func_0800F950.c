#include "types.h"

extern void func_08001408(u32, u32, u32, u32);

void func_0800F950(u8 *p, u16 a) {
    func_08001408(0, *(u32 *)(*(u8 **)(p + 0x34) + 0x2C) + a * 32, 32, 0);
}
