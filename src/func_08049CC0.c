#include "types.h"

struct S {
    u32 f0;
    u8 pad[20];
    u16 a;
    u16 b;
    u8 pad2[4];
};

extern struct S gUnk_02035B58[];

void func_08049CC0(u8 i, u16 *a, u16 *b) {
    struct S *p = &gUnk_02035B58[i];
    if (a)
        *a = p->a;
    if (b)
        *b = p->b;
    p->f0 = 0;
}
