#include "types.h"
extern u8 gUnk_02035A8C[];
void func_080066B8(u16, u32);
void func_0804957C(void) {
    u8 *p = gUnk_02035A8C;
    s32 i;
    for (i = 7; i >= 0; i--) {
        if (*(u32 *)p != 0)
            func_080066B8(*(u16 *)(p + 4), *(u16 *)(p + 6) >> 5);
        p += 8;
    }
}
