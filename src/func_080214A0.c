#include "types.h"

extern u32 func_080177BC(u8 *);

u32 func_080214A0(u8 *p) {
    u32 v = *(u32 *)(p + 0x230);
    if (v == 3)
        v = func_080177BC(p);
    return v;
}
