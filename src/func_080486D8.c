#include "types.h"

extern u16 gUnk_02035ACC;
extern u32 gUnk_02035AD0[];

void func_080486D8(void) {
    u16 *c = &gUnk_02035ACC;
    u32 *b = gUnk_02035AD0;
    u32 z = 0;
    u32 *p = b + 31;
    do {
        *p = z;
        p--;
    } while ((s32)p >= (s32)b);
    *c = 0;
}
