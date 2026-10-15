#include "types.h"

struct S {
    u8 pad[16];
    u8 a, b, c, d;
    u32 pad2;
    u32 e;
};

extern void func_080C16B8(struct S *, u8);

void func_080C1690(struct S *p, u8 x, u8 y) {
    func_080C16B8(p, x);
    p->e = x;
    p->a = 1;
    p->b = y;
    p->c = 0;
}
