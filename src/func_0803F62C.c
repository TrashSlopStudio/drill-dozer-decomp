#include "types.h"

struct B {
    u8 pad[0x14];
    u16 x;
    u16 y;
    u8 pad2[0xc];
    u16 x2;
    u16 y2;
};

struct A {
    int n;
    u8 pad[0x28];
    int cnt;
    u8 pad2[0x30];
    struct B *p;
};

int func_0803F62C(struct A *a, struct B *b) {
    ((u8 *)b)[1] ^= 1;
    if (++a->cnt > 29) {
        a->n++;
    }
    a->p->x2 = b->x;
    a->p->y2 = b->y;
    return 0;
}
