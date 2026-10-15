#include "types.h"

extern u16 func_080055A4(u32, u32, u16, u32, u32);

u16 func_0801B07C(u32 a, u8 *b) { return func_080055A4(a, *(u32 *)(b + 0x30), 16, 412, 612); }
