#include "types.h"

struct T {
    u8 pad[0x25];
    u8 lo : 2;
    u8 f : 2;
};

struct R {
    struct T *t;
    u8 b4;
    u8 b5;
};

extern struct R *func_0807E634(u8 *p);

void func_0804CF08(u8 *a, u32 v) {
    struct R *r = func_0807E634(a);
    r->t->f = v;
    r->b5 = v;
}
