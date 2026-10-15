#include "types.h"
struct S {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};
struct P {
    u8 pad[8];
    struct S *e;
    u32 pad2;
    u32 f;
};
extern void func_08006ABC(u32);
extern void func_0807E98C(struct S *);

void func_080A7EE8(u32 x, struct P *p) {
    struct P *q = p;
    if (p->f != 0)
        func_08006ABC(p->e->b);
    func_0807E98C(q->e);
}
