#include "types.h"

struct N {
    u8 lo : 4;
    u8 hi : 4;
};

struct S {
    u8 pad[12];
    u8 *p;
};

extern u8 *func_0801AF9C(u32, u32);
extern u32 func_080128C8(u8);

void func_080911C8(u32 a, struct S *s) {
    s->p = func_0801AF9C(a, 3);
    ((struct N *)(s->p + 37))->hi = func_080128C8(53);
}
