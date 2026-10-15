#include "types.h"

struct V;
struct S {
    u32 a;
    struct V *v;
};
struct V {
    u32 a;
    void (*fn)(struct S *);
};

void func_080E3224(u8 *p) {
    struct S *s = *(struct S **)(p + 32);
    if (s)
        s->v->fn(s);
}
