#include "types.h"
extern u8 *gUnk_0203603C;
extern void func_08000F28(u32, u32);
extern void func_08063AF0(void);
void func_080636E8(void) {
    u8 *p = gUnk_0203603C;
    if (p != 0 && (p[2] & 2) != 0) {
        func_08000F28(0x4A, 0x3F);
        func_08063AF0();
    }
}
