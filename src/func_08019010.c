#include "types.h"

extern u8 gUnk_02035054[];
extern void func_08001370(u32, u32, u16, u32);

void func_08019010(void) { func_08001370((u32)gUnk_02035054, 0x05000000, 0x400, 0); }
