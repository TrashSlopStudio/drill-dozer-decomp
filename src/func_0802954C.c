#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_0801B064(u32);
extern void func_0802A0B0(u32);

void func_0802954C(u8 *p) {
    func_0801BF48(p + 0x9C, *(u32 *)(p + 0x7C));
    func_0801B064(*(u32 *)(p + 0x7C));
    func_0802A0B0(67);
}
