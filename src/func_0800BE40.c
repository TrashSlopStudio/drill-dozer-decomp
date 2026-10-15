#include "types.h"

struct S {
    u8 pad[0x70];
    u16 a;
    u8 pad2[0x10E - 0x72];
    u16 b;
};

void func_0800BE40(struct S *p) {
    p->a = 0x240A;
    p->b = 0xAC01;
}
