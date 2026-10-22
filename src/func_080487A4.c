#include "types.h"
extern u32 func_080016E8(u32);
extern void func_080F8710(u8 *, u32);
u32 func_080487A4(u8 *a, u8 *b) {
    u32 r;
    b[0] = a[1];
    b[1] = a[2];
    b[2] = a[3];
    b[3] = 0;
    r = func_080016E8(*(u32 *)b);
    if (r != 0) {
        func_080F8710(a, r);
    }
    return r;
}
