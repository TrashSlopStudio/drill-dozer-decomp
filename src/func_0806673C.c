#include "types.h"

struct S {
    u32 state;
    u16 a;
    u16 t;
    u8 pad[16];
    u8 *q;
};

extern struct S *func_0800098C(u32);

u32 func_0806673C(u32 a) {
    struct S *s = func_0800098C(a);
    if (s->state != 2)
        return 0;
    s->state = 3;
    s->t = 0;
    s->q[1] = 0;
    return 1;
}
