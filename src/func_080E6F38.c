#include "types.h"

extern void func_080E73E0(u32);
extern void func_0807E98C(u32);

void func_080E6F38(u8 *p) {
    p += 0x7C;
    func_080E73E0(*(u32 *)(p + 0x54));
    if (*(u32 *)(p + 0x18) == 0)
        func_0807E98C(*(u32 *)(p + 0x44));
}
