#include "types.h"
extern u8 func_0800DDD4(u32, u32);
extern void func_080A7800(u32);
extern void func_080A780C(u32);
void func_080A781C(u32 a) {
    if (func_0800DDD4(*(u32 *)(a + 12), a + 44) == 1)
        func_080A7800(a);
    else
        func_080A780C(a);
}
