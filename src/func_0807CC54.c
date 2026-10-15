#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern u8 gUnk_02036134[];

void func_0807CC54(void) {
    u32 z = 0;
    func_080F86FC(&z, gUnk_02036134, 0x0500000C);
}
