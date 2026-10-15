#include "types.h"

extern void func_080F0460(u32, u8 *);

void func_080F0448(u8 *a) {
    func_080F0460(*(u32 *)(a + 0x58), a);
    *(u32 *)(a + 0x10) = 1;
}
