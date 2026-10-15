#include "types.h"

extern u8 func_08015B30(u32, u32, s16, s16);

u8 func_0800D814(u8 *a, u32 x, u32 y) { return func_08015B30(*(u32 *)(a + 0x34), 1, x, y); }
