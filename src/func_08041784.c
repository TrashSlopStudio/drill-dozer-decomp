#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_0801B064(u32);

void func_08041784(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801BF48(p + 0xA0, *(u32 *)(p + 0x7C));
    func_0801B064(*(u32 *)(p + 0x7C));
    func_0801B064(*(u32 *)(q + 4));
}
