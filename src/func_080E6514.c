#include "types.h"

extern void func_080057F0(u32 a, u32 b, u32 c);

void func_080E6514(u8 *a, u32 *b, u8 c) {
    s32 i;
    a[0x78] = c;
    for (i = 0; i <= 2; i++) {
        if (i != 2)
            func_080057F0(b[i], 0, 0);
    }
}
