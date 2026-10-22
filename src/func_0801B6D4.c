#include "types.h"

extern u8 *gUnk_02035868;
extern void func_080F8FB8(void *, u32);

void func_0801B6D4(void) {
    u8 *p = gUnk_02035868;
    s32 i = 63;
    do {
        if (*(u32 *)(p + 12) != 0) {
            func_080F8FB8(p, *(u32 *)(*(u32 *)(p + 4) + 36));
        }
        i--;
        p += 252;
    } while (i >= 0);
}
