#include "types.h"

extern u8 gUnk_020360F4[];
extern void func_080F86FC(u32 *, u8 *, u32);

void func_08073DCC(void) {
    u32 z = 0;
    func_080F86FC(&z, gUnk_020360F4, 0x05000004);
    {
        u32 b = gUnk_020360F4[4];
        u32 t = b | 1;
        gUnk_020360F4[4] = t;
    }
}
