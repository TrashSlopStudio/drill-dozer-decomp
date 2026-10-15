#include "types.h"

extern void func_08001768(u32);

void func_080886E0(u8 *p) {
    u8 *q = p + 0x7C;
    func_08001768(*(u32 *)(p + 0x7C));
    func_08001768(*(u32 *)(q + 0x10));
}
