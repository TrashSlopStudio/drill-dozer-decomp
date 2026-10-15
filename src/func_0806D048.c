#include "types.h"

extern void func_0801B064(u32);

void func_0806D048(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801B064(*(u32 *)(p + 0x7C));
    func_0801B064(*(u32 *)(q + 8));
    func_0801B064(*(u32 *)(q + 12));
    func_0801B064(*(u32 *)(q + 4));
}
