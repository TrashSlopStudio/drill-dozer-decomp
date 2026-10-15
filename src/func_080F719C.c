#include "types.h"

struct S {
    u8 pad[0x24];
    u16 a;
    u16 b;
    u16 c;
    u8 pad2[0xA];
    u32 id;
};

void func_080F719C(struct S *p, u16 v) {
    if (p->id == 0x68736D53) {
        p->id++;
        p->b = v;
        p->a = v;
        p->c = 0x101;
        p->id = 0x68736D53;
    }
}
