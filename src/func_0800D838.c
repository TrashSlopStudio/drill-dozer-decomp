#include "types.h"

extern u32 func_0800D814(u32 a, s16 b, s16 c);
extern u8 gUnk_0810182C[];

u32 func_0800D838(u32 a, s16 b, s16 c) {
    u32 i = func_0800D814(a, b, c);
    u32 v = (u32)((u32)gUnk_0810182C[i * 8] << 28) >> 29;
    if (v != 0)
        return 1;
    return 0;
}
