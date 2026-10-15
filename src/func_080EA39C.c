#include "types.h"

extern void func_080E969C(u32, u8 *, u32);

u32 func_080EA39C(u32 a, u8 *b) {
    if ((*(u8 **)(b + 0x2C))[14] == 1)
        func_080E969C(a, b, 10);
    return 1;
}
