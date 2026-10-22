#include "types.h"

extern u8 *gUnk_02035868;
extern void func_080F8FB8(u8 *, u32);

void func_0801B6A8(void) {
    u8 *p = gUnk_02035868;
    s32 i;
    for (i = 63; i >= 0; i--, p += 252) {
        if (*(u32 *)(p + 12) != 0)
            func_080F8FB8(p, *(u32 *)(*(u8 **)(p + 4) + 32));
    }
}
