#include "types.h"

struct S {
    u8 pad[0x16];
    s16 t;
    u8 pad2[5];
    u8 f;
};

u32 func_08086030(struct S *p) {
    if (++p->t > 0) {
        p->f = 0;
        return 1;
    }
    return 6;
}
