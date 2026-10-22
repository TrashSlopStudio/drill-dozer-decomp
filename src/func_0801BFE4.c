#include "types.h"
extern s32 func_0801BFC0(u8 *, u32);
extern void func_0802AF60(u32);
extern void func_08029E54(u32);
s32 func_0801BFE4(u8 *p, u32 b, s32 c) {
    if (func_0801BFC0(p, b) == 1) {
        func_0802AF60(*(u32 *)(p + 12));
        if (c == 0)
            func_08029E54(75);
        return 1;
    }
    return 0;
}
