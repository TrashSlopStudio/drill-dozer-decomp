#include "types.h"

extern void func_0801B1C4(u8 *);
extern void func_08005814(u8 *, u32);

void func_080E16B0(u8 *a) {
    u8 *p = *(u8 **)(a + 0x7C);

    if (p[14] == 1)
        func_0801B1C4(a);
    else
        func_08005814(p, 0x084AAF58);
}
