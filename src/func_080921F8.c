#include "types.h"
extern u32 gUnk_083C72B8[];
extern void func_080F8FBC(u8 *a, u8 *b, u32 c);
void func_080921F8(u8 *p) { func_080F8FBC(p, p + 0x7C, gUnk_083C72B8[p[0x76]]); }
