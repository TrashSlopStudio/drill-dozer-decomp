#include "types.h"

struct B {
    u8 pad[26];
    s16 h;
};

struct A {
    u32 a;
    struct B *b;
};

u32 func_08027710(u32 x, struct A *p) {
    p->b->h += 4;
    if (p->b->h > 0)
        return 1;
    return 0;
}
