#include "types.h"

extern void func_08050058(void *);

void func_080854D4(void *a, u8 *b) {
    s32 i;
    u32 *p;
    u32 zero;

    func_08050058(b + 4);
    zero = 0;
    i = 4;
    p = (u32 *)(b + 20);
    for (; i >= 0; i--)
        *p-- = zero;
}
