#include "types.h"

extern u32 gUnk_03000010[];
extern u32 gUnk_080FAB54;

void func_080009D8(void) {
    u32 *b = gUnk_03000010;
    u32 v = gUnk_080FAB54;
    u32 *p = b + 3;
    do {
        *p = v;
        p--;
    } while ((s32)p >= (s32)b);
}
