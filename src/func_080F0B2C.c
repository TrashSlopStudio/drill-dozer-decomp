#include "types.h"

extern u32 func_080F0B60(u32);
extern void func_080F09E8(u32, u32, u32, u32);

void func_080F0B2C(u32 *p) { func_080F09E8(func_080F0B60(p[4]) + p[1], p[2], p[3], p[4]); }
