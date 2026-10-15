#include "types.h"

extern void func_080E969C(u32, u8 *, u32);

u32 func_080EA37C(u32 a, u8 *b) {
    if ((*(u8 **)(b + 44))[14] == 1)
        func_080E969C(a, b, 8);
    return 1;
}
