#include "types.h"

extern void func_08012884(u32);
extern void func_0801B064(u32);

void func_080ABCA4(u8 *p) {
    p += 0x7C;
    func_08012884(176);
    func_0801B064(*(u32 *)(p + 20));
}
