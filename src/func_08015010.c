#include "types.h"

extern u16 func_08014E7C(u32 a, s16 b, s16 c);

s16 func_08015010(u32 a, s16 b, s16 c) {
    u16 r = func_08014E7C(a, b, c);
    return r - c;
}
