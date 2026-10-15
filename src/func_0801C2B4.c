#include "types.h"
struct V {
    s32 x, y;
};
struct S {
    u8 pad[0x24];
    u16 ox, oy;
    u8 pad2[0x44 - 0x28];
    struct V v, p;
};
void func_0801C2B4(struct S *a, s16 *x, s16 *y) {
    struct V v = a->v;
    struct V p;
    p.x = a->p.x;
    p.x = v.x + p.x;
    p.y = a->p.y;
    p.y = v.y + p.y;
    p.x >>= 16;
    p.x -= a->ox;
    *x = p.x;
    p.y >>= 16;
    p.y -= a->oy;
    *y = p.y;
}
