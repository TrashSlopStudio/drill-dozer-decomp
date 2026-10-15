#include "types.h"

extern u32 *func_0800098C(u32);

u32 func_080F11B4(u8 *p) {
    u32 x = *(u32 *)(p + 0x74);
    if (x == 0)
        return 1;
    return func_0800098C(x)[1];
}
