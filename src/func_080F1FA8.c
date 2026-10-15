#include "types.h"
extern void *gUnk_084E63D0[];
extern s32 func_080F8FBC(u8 *, u8 *, void *);
void func_080F1FA8(u8 *a) {
    u8 *b = a + 0x7c;
    while (func_080F8FBC(a, b, gUnk_084E63D0[*(u32 *)b]) == 1)
        ;
}
