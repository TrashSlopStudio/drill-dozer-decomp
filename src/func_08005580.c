#include "types.h"

struct S {
    u8 pad[0x10];
    u16 h;
    u8 pad2[0x12];
    u16 t : 10;
};

void func_08005580(struct S *p, u16 v) {
    p->t = v;
    p->h = v;
}
