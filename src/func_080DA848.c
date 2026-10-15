#include "types.h"

struct S {
    u8 pad[115];
    u8 f73;
    u8 f74;
    u8 f75;
    u8 f76;
    u8 f77;
};

void func_080DA848(struct S *p, u8 a) {
    p->f74 = a;
    p->f76 = 0;
    p->f77 = 0;
    p->f73 = 0;
}
