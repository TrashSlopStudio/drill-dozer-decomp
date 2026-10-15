#include "types.h"

extern void func_080B3D50(u8 *, u8 *, u32);

u32 func_080B4B38(u8 *a, u8 *b) {
    if ((*(u8 **)(b + 0x2C))[14] == 1)
        func_080B3D50(a, b, 10);
    return 1;
}
