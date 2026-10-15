#include "types.h"

extern u8 func_08019B88(void);
extern void func_080693B0(u32 *a, u32 b);
extern u32 *gUnk_02036060;

u32 func_08069D7C(void) {
    u32 r;
    if (func_08019B88() != 0) {
        r = 0;
    } else {
        func_080693B0(gUnk_02036060, 9);
        r = 1;
    }
    return r;
}
