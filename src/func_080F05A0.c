#include "types.h"

extern u8 *func_0800098C(u32);

u32 func_080F05A0(u8 *p) {
    u32 v = *(u32 *)(p + 108);
    if (v == 0)
        return 1;
    return *(u32 *)(func_0800098C(v) + 8);
}
