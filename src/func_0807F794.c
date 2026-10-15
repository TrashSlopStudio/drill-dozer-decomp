#include "types.h"

extern u8 gUnk_0838DB28[];
extern u32 func_080304C8(void);
extern void func_0807E46C(void *, u32, u32, u32, u32);

void func_0807F794(void) { func_0807E46C(gUnk_0838DB28, 0, 0, func_080304C8() | 0x100, 0); }
