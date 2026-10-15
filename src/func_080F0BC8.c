#include "types.h"

extern u8 *func_0800098C(u32);

u32 func_080F0BC8(u8 *a) {
    u32 v = *(u32 *)(a + 0x70);
    if (v == 0)
        return 1;
    return *(u32 *)(func_0800098C(v) + 0x10);
}
