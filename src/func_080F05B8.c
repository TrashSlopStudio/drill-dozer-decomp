#include "types.h"

extern u32 *func_0800098C(u32);

void func_080F05B8(u8 *a, u32 b) {
    u32 *r;
    if (*(u32 *)(a + 0x6C) != 0) {
        r = func_0800098C(*(u32 *)(a + 0x6C));
        r[0] = 0;
        r[1] = 0;
        r[2] = 0;
        r[6] = b;
    }
}
