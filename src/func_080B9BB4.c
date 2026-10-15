#include "types.h"

struct S {
    u8 pad[14];
    u8 a;
    u8 b;
    u8 c;
};

extern void func_080B9BDC(struct S *, u8, u8);

void func_080B9BB4(struct S *p, u8 x, u8 y) {
    u8 z = 0;
    p->a = 1;
    p->b = z;
    p->c = z;
    func_080B9BDC(p, x, y);
}
