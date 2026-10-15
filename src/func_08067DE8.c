#include "types.h"

extern u8 gUnk_08336FD4[];
extern u8 gUnk_08336FF8[];
extern u8 gUnk_08336FD8[];
extern u32 func_08067BB4(void *, u32, void *, void *);

void func_08067DE8(u8 *a) {
    *(u32 *)(a + 0x34) = func_08067BB4(gUnk_08336FD4, 0x99, gUnk_08336FF8, gUnk_08336FD8);
}
