#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_080E0EEC(u8 *a, u32 *b, u32 c) {
    s32 i;
    u32 *r = b;
    u8 *p = a + 0x78;
    if (c != *p) {
        u8 z = 0;
        u32 *q;
        *p = c;
        *(a + 0x79) = z;
        q = r;
        for (i = 1; i >= 0; i--) {
            func_080057F0(*q++, 0, 0);
        }
    }
}
