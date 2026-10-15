#include "types.h"

extern u32 func_08011720(u32);
extern u32 func_0806D550(u32, u32, u32);

u32 func_0806D59C(u32 a, u32 b, u32 c) { return func_0806D550(func_08011720(a), b, c); }
