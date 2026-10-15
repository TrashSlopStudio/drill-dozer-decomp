#include "types.h"

struct S {
    u8 pad[0x24];
    u16 a;
    u16 b;
    u16 c;
    u8 pad2[0x0A];
    u32 ident;
};

void func_080F6EE4(struct S *p, u16 v) {
    if (p->ident == 0x68736D53) {
        p->ident++;
        p->b = v;
        p->a = v;
        p->c = 256;
        p->ident = 0x68736D53;
    }
}
