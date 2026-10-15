#include "types.h"

struct S {
    u8 pad[0x140];
    u16 a;
    u16 b;
    u8 pad2[0x15A - 0x144];
    u16 c;
    u16 d;
    u16 e;
};

void func_0803016C(struct S *p) {
    p->a = p->c;
    p->b = p->e;
}
