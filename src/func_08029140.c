#include "types.h"

extern s16 func_08015EB8(u8 *p, u8 c);

s32 func_08029140(u8 *p) { return func_08015EB8(*(u8 **)(*(u8 **)(p + 12) + 52), 1) + 160; }
