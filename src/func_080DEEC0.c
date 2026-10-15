#include "types.h"

extern u32 gUnk_020391E8;
extern void func_0801B064(u32);

void func_080DEEC0(u8 *p) {
    p += 0x7C;
    func_0801B064(*(u32 *)(p + 4));
    gUnk_020391E8 = 0;
}
