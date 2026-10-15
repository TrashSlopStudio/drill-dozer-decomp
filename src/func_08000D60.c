#include "types.h"

extern u32 func_08000F88(u32);
extern void func_08000F28(u32, u32);

void func_08000D60(void) { func_08000F28(0, func_08000F88(0) & 0xF0F8); }
