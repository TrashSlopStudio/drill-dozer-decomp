#include "types.h"

extern u32 func_0801C0B4(u8 *);
extern u32 func_0802B668(u32, u32, u32);

u32 func_0801BFC0(u8 *p, u32 b, u32 c) {
    u32 k;
    if (c == 0)
        k = 2;
    else
        k = func_0801C0B4(p);
    return func_0802B668(*(u32 *)(p + 12), k, b);
}
