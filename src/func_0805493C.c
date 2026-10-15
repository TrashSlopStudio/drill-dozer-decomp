#include "types.h"

extern void func_080057F0(u32, u32, u32);

void func_0805493C(u8 *a, u32 *b, u32 c) {
    s32 i;
    u32 *p = b + 1;
    for (i = 1; i >= 0; i--) {
        func_080057F0(*p++, 0, 0);
    }
    a[0x78] = c;
}
