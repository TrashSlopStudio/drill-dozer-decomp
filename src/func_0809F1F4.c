#include "types.h"
extern void func_080057F0(u32, u32, u32);
struct S {
    u8 a, b;
};
void func_0809F1F4(u8 *a, u8 *b, u32 c) {
    struct S *p = (struct S *)(a + 120);
    if (p->a != c) {
        u8 *q;
        u32 z = 0;
        p->a = c;
        q = &p->b;
        *q = z;
        func_080057F0(*(u32 *)(b + 4), 0, 0);
    }
}
