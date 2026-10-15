#include "types.h"
extern u32 func_0804AABC(u8 *, u32);
u32 func_0804AADC(u8 *p, u32 b) {
    while (*p != 0xFF)
        p++;
    return func_0804AABC(p, b);
}
