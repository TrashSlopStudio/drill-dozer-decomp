#include "types.h"

struct S {
    u8 *a[8];
    u32 n;
};

void func_080BD974(struct S *p, u32 v) {
    u32 i = 0;
    u8 **q;
    if (i < p->n) {
        q = p->a;
        do {
            (*q++)[1] = v;
        } while (++i < p->n);
    }
}
