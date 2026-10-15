#include "types.h"

struct S {
    u8 pad[0x30];
    u32 h;
    u8 pad2[0xBC];
    u8 a, b;
};

extern void func_080057F0(u32, u32, u32);

void func_080CED90(u32 a, struct S *p, u32 v) {
    if (p->h != 0) {
        func_080057F0(p->h, 0, 0);
        p->a = v;
        p->b = 0;
    }
}
