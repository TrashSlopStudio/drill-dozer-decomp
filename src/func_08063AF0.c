#include "types.h"

extern u8 *gUnk_0203603C;
extern void func_08000FD8(u32, u32);

void func_08063AF0(void) {
    if (gUnk_0203603C != 0 && (gUnk_0203603C[2] & 2) != 0)
        func_08000FD8(0, 0x2000);
}
