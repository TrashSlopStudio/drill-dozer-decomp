#include "types.h"

struct S {
    u8 pad[0x28];
    s16 a;
    s16 b;
    s16 c;
    s16 d;
};

void func_08011AA0(struct S *p, s16 *o) {
    o[0] = (p->c + p->d) >> 1;
    o[1] = (p->a + p->b) >> 1;
}
