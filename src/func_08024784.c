#include "types.h"

extern void func_0800FBB0(u32, u8 *, u8);

void func_08024784(u8 *p) {
    u8 *q = p + 124;
    func_0800FBB0(*(u32 *)(p + 12), p + 36, *q);
}
