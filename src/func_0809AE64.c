#include "types.h"
extern u32 func_0809AF48(u32 a);
u32 func_0809AE64(u32 a, u8 *b) {
    u8 *p;
    u32 one;
    if (func_0809AF48(a) == 0)
        return 0;
    p = *(u8 **)(b + 16);
    one = 1;
    p[1] = one;
    return one;
}
