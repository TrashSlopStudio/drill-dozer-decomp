#include "types.h"

extern u32 func_080B9768(u8 *);
extern u8 gUnk_0844065C[];

void func_080B9690(u8 *p) {
    *(u32 *)(p + 24) = func_080B9768(p);
    *(u16 *)(p + 32) = 0;
    *(u16 *)(p + 34) = 0;
    *(u16 *)(p + 36) = 92;
    *(u8 **)(p + 28) = gUnk_0844065C;
}
