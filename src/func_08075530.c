#include "types.h"

struct S {
    u32 a;
    u32 b;
};

extern struct S gUnk_08363340[];
extern struct S gUnk_08363380[];
void func_080754C0(u32 *, u32, u32);

void func_08075530(u32 i, u32 *p) {
    struct S *s2 = &gUnk_08363380[i];
    struct S *s1 = &gUnk_08363340[i];
    func_080754C0(p + 1, s1->b, s2->b);
}
