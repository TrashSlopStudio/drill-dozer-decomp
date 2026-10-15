#include "types.h"

extern void func_0801C17C(u8 *);

u32 func_080A60AC(u8 *a, u8 *b) {
    if (++*(s32 *)(b + 0x2C) == 20) {
        *(s32 *)(b + 0x2C) = 0;
        a[0x76] = 9;
        func_0801C17C(a);
    }
    return 1;
}
