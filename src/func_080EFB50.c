#include "types.h"

struct T {
    u8 pad[0x25];
    u8 a : 2;
    u8 b : 2;
};

struct S {
    u8 pad[0x7C];
    struct T *t;
};

void func_080EFB50(struct S *s, u32 v) { s->t->b = v; }
