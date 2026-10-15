#include "types.h"
extern u8 *func_080F5C84(u32);
u32 func_080D91B0(u32 a, u32 b) {
    u8 *p = func_080F5C84(a);
    if (b == 2) {
        p[2] = 1;
        return *(u32 *)(p + 0x40);
    }
    p[3] = 1;
    return *(u32 *)(p + 0x44);
}
