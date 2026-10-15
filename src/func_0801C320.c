#include "types.h"
struct S {
    u16 a;
    u16 b;
    s16 c;
    s16 d;
};
void func_0801C320(struct S *p, s16 *x, u16 *y) {
    *x = (p->c + p->d) / 2;
    *y = p->b;
}
