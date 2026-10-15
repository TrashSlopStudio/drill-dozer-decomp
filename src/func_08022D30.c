#include "types.h"

struct S {
    u8 pad[12];
    u32 a;
    u8 pad2[8];
    u16 n;
};

extern void func_0800B6CC(u32, u16, u32);

void func_08022D30(struct S *p) {
    if (p->n != 0)
        func_0800B6CC(p->a, p->n, 0);
}
