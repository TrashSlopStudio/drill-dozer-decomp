#include "types.h"

extern s16 *func_080178B4(u32, u32);

s32 func_080178E8(u8 *p, u32 b) { return *func_080178B4(*(u32 *)(p + 0x448), b); }
