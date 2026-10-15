#include "types.h"

extern u32 func_0804AAF4(u8 *, u32, u8);

u32 func_0804AB24(u8 *p, u32 b, u8 c) {
    while (*p != 0xFF)
        p++;
    return func_0804AAF4(p, b, c);
}
