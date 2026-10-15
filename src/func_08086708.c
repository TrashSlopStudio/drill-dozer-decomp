#include "types.h"

struct S {
    u8 *a;
    u8 pad[11];
    u8 b;
    u8 c[4];
};

extern void func_080067CC(u8 *, u8 *);
extern void func_08005560(u8 *);

void func_08086708(u32 x, struct S *p) {
    p->b = p->a[1];
    func_080067CC(p->a, p->c);
    func_08005560(p->a);
}
