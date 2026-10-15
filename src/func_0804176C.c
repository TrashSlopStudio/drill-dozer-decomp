#include "types.h"

extern void func_0801B064(u32);

void func_0804176C(u8 *a) {
    u8 *q = a + 0x7C;
    func_0801B064(*(u32 *)(a + 0x7C));
    func_0801B064(*(u32 *)(q + 4));
}
