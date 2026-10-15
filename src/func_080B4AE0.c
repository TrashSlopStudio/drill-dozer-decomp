#include "types.h"
extern void func_08029E54(u32);
extern void func_080B3D50(u8 *, u8 *, u32);
u32 func_080B4AE0(u8 *a, u8 *b) {
    if ((*(u8 **)(b + 0x2c))[0xe] == 1) {
        func_08029E54(0x119);
        func_080B3D50(a, b, 8);
    }
    return 1;
}
