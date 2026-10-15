#include "types.h"

struct B {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};

struct O {
    u8 pad[0x2C];
    struct B *p;
};

extern void func_08006ABC(u32);
extern void func_0807E98C(struct B *);

void func_080E34E0(u32 x, struct O *o) {
    func_08006ABC(o->p->b);
    func_0807E98C(o->p);
}
