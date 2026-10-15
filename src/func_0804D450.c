#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern u8 gUnk_0203600C[];

void func_0804D450(void) {
    u32 z = 0;
    func_080F86FC(&z, gUnk_0203600C, 0x05000002);
}
