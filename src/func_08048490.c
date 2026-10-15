#include "types.h"

extern u32 func_0800B2A0(u32);
extern u32 func_08048450(u32, s32, u8 *, u32);

u32 func_08048490(u32 a, s32 b, u8 *c, u32 d) {
    if (func_0800B2A0(a) == 1)
        return 0;
    return func_08048450(a, b, c, d);
}
