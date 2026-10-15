#include "types.h"

extern u32 (*gUnk_084206E0[])(u8 *);

void func_080B39D0(u8 *a) {
    while (gUnk_084206E0[*(u32 *)(a + 0x3C0)](a) == 1)
        ;
}
