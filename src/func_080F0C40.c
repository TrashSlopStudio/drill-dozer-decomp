#include "types.h"

extern void func_08000F28(u32, u16);

void func_080F0C40(u32 *p) { func_08000F28(0x52, p[5] | (p[6] << 8)); }
