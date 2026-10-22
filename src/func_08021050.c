#include "types.h"
extern s32 func_0802FE7C(u32);
extern u8 func_08021040(s8);
extern u8 func_08021030(s8);
u8 func_08021050(u32 a, u8 b) {
    if (func_0802FE7C(a) <= 2)
        return func_08021030(b);
    return func_08021040(b);
}
