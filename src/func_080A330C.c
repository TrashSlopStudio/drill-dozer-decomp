#include "types.h"

struct S {
    u8 pad[10];
    u8 a;
    u8 b;
    u8 pad2[7];
    u8 c;
};

void func_080A330C(struct S *p, u8 a) {
    p->a = a;
    p->b = 0;
    switch (a) {
    case 7:
        p->c = 1;
        break;
    case 8:
        p->c = 2;
        break;
    default:
        p->c = 0;
        break;
    }
}
