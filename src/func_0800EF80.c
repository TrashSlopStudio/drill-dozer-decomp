#include "types.h"
struct S {
    u8 b[4];
    u16 h[4];
};
void func_0800EF80(struct S *s, u32 v, u32 c) {
    u8 *p;
    v += 3;
    p = s->b + 3;
    do {
        *p = v;
        v--;
        p--;
    } while ((s32)p >= (s32)s);
    s->h[0] = c;
    s->h[1] = c + 1;
    s->h[2] = c + 8;
    s->h[3] = c + 9;
}
