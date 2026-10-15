#include "types.h"
extern u32 gUnk_08488E38[];
extern int func_080F8FBC(u8 *, u32 *, u32);
void func_080DB474(u8 *p) {
    u32 *q = (u32 *)(p + 0x7C);
    while (func_080F8FBC(p, q, gUnk_08488E38[q[4]]) != 0)
        ;
}
