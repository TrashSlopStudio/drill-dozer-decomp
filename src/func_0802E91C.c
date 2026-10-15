#include "types.h"

extern u8 gUnk_0824D10C[];
extern void func_0802E5D0(u32, void *, u32);

void func_0802E91C(u32 a, u32 b, u32 c) { func_0802E5D0(b, gUnk_0824D10C + a * 8, c); }
