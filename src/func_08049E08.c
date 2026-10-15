#include "types.h"

struct S {
    u8 pad[24];
    u16 a;
    u16 b;
    u8 pad2[4];
};

extern struct S gUnk_02035B58[];

void func_08049E08(u8 i, u16 *out) {
    struct S *p = &gUnk_02035B58[i];
    if (out)
        *out = p->a + p->b;
}
