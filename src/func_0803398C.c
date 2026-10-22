#include "types.h"
extern void func_08005814(u32, u32);
extern u32 gUnk_082AD2B4;
void func_0803398C(u32 a) {
    s32 i = 0;
    u32 *p = (u32 *)(a + 0xD8);
loop:
    if (*p != 0) {
        func_08005814(*p, (u32)&gUnk_082AD2B4);
    }
    p++;
    if (++i <= 2)
        goto loop;
}
