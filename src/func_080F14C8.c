#include "types.h"

extern void func_080FAAC8(void *, u32, u32);

void func_080F14C8(u8 *a, s32 b) {
    func_080FAAC8(a + 0x34, 0, 0x24);
    if (b == -1) {
        *(s32 *)(a + 4) += 1;
    } else {
        *(s32 *)(a + 4) = b;
    }
}
