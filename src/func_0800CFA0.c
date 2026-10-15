#include "types.h"

extern u32 func_08015B30(u32, u32, s16, s16);

u8 func_0800CFA0(u8 *a, s16 b, s16 c) { return func_08015B30(*(u32 *)(a + 0x34), 0, b, c); }
