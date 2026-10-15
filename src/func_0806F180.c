#include "types.h"

extern u8 gUnk_08341CD4[];
extern void func_0806F1A4(u8 *);
extern void func_08005814(u8 *, u8 *);

void func_0806F180(u8 *a) {
    u8 *p = *(u8 **)(a + 12);
    if (p[14] == 1)
        func_0806F1A4(a);
    else
        func_08005814(p, gUnk_08341CD4);
}
