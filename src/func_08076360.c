#include "types.h"

extern u8 func_0800DDD4(u32, u32);
extern void func_08029E54(u32);

u32 func_08076360(u32 a, u32 b, u32 c) {
    u32 r;
    if (func_0800DDD4(a, b) != 1) {
        r = 0;
    } else {
        func_08029E54((u16)c);
        r = 1;
    }
    return r;
}
