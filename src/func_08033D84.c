#include "types.h"

extern void func_08005814(u32 a, u32 b);
extern u32 gUnk_082AD2F4;

void func_08033D84(u8 *p) {
    s32 i = 0;
    u32 *q = (u32 *)(p + 0xe4);
loop:
    if (*q != 0) {
        func_08005814(*q, (u32)&gUnk_082AD2F4);
    }
    q++;
    i++;
    if (i <= 5)
        goto loop;
}
