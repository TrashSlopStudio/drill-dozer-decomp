#include "types.h"

extern u32 func_080177F0(void);
extern s8 *gUnk_02035A74;

void func_08048248(void) {
    if (func_080177F0() == 3) {
        s8 *p = gUnk_02035A74;
        u16 one;
        *(u16 *)(p + 20) = one = 1;
        p[34] &= one;
        gUnk_02035A74[34] &= ~1;
    }
}
