#include "types.h"

struct S {
    u32 state;
    u16 pad4;
    u16 timer;
    u8 pad8[0x10];
    u8 *sub;
};

extern struct S *func_0800098C(void);

u32 func_08066764(void) {
    struct S *p = func_0800098C();
    u32 r;
    if (p->state != 3)
        return 0;
    p->state = 2;
    p->timer = 0;
    p->sub[1] = r = 1;
    return r;
}
