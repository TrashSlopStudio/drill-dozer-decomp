#include "types.h"

extern void func_080B3D50(u32, u8 *, u32);

u32 func_080B4AC0(u32 a, u8 *b) {
    if ((*(u8 **)(b + 0x2C))[14] == 1) {
        b[11] = 0;
        func_080B3D50(a, b, 7);
    }
    return 1;
}
