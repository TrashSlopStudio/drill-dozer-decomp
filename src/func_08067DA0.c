#include "types.h"

extern u8 gUnk_08336F90[];
extern u8 gUnk_08336FEC[];
extern u8 gUnk_08336F94[];
extern u32 func_08067BB4(void *, u32, void *, void *);

void func_08067DA0(u8 *a) {
    *(u32 *)(a + 0x2C) = func_08067BB4(gUnk_08336F90, 150, gUnk_08336FEC, gUnk_08336F94);
}
