#include "types.h"

struct S {
    u8 pad[0x1C];
    u8 *q;
    u8 pad2[0x19];
    u8 b;
};

extern void func_080F45F0(struct S *);

void func_080F3E8C(u32 a, struct S *p) {
    if (p->q == 0)
        p->b = 0xFF;
    else
        p->b = p->q[1];
    func_080F45F0(p);
}
