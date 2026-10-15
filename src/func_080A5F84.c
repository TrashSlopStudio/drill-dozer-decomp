#include "types.h"

extern void func_080A620C(u32, u8 *, u32);

u32 func_080A5F84(u8 *a, u8 *b) {
    func_080A620C(5, b + 51, *(u32 *)b);
    a[118] = 8;
    return 1;
}
