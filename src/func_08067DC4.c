#include "types.h"

extern u8 gUnk_08336FC0[];
extern u8 gUnk_08336FF4[];
extern u8 gUnk_08336FC4[];
extern u32 func_08067BB4(void *, u32, void *, void *);

void func_08067DC4(u8 *a) {
    *(u32 *)(a + 0x30) = func_08067BB4(gUnk_08336FC0, 151, gUnk_08336FF4, gUnk_08336FC4);
}
