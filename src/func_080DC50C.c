#include "types.h"

extern void func_080F86FC(void *, void *, u32);
extern u8 gUnk_03001A00[];

void func_080DC50C(void) {
    s32 v = -1;
    func_080F86FC(&v, gUnk_03001A00, 0x05000800);
}
