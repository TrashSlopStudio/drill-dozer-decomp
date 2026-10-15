#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern s32 gUnk_0203586C;

void func_0801AE70(void *dst) {
    u32 z = 0;
    func_080F86FC(&z, dst, 0x0500003F);
    gUnk_0203586C--;
}
