#include "types.h"

extern void func_0801B064(u32);

void func_08081D88(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801B064(*(u32 *)(p + 0x7C));
    func_0801B064(*(u32 *)(q + 44));
    func_0801B064(*(u32 *)(q + 48));
}
