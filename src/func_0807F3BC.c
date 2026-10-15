#include "types.h"

struct B {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};

struct P {
    u8 pad[0x18];
    struct B *e;
};

extern void func_08006ABC(u32);
extern void func_0807E98C(u32);

void func_0807F3BC(u32 a, struct P *p) {
    func_08006ABC(p->e->b);
    func_0807E98C((u32)p->e);
}
