#include "types.h"

struct R {
    u32 a, b;
};
struct Src {
    u8 pad[20];
    u16 h20, h22, h24, h26;
};
struct Dst {
    u32 pad;
    struct R r;
};
struct Obj {
    struct Src *src;
    union {
        struct R r;
        u16 h[4];
    } u;
    u8 pad[52];
    struct Dst *dst;
};
void func_08007CB8(struct Obj *p) {
    struct Src *s = p->src;
    p->u.h[0] = s->h22;
    p->u.h[1] = s->h26;
    p->u.h[2] = s->h20;
    p->u.h[3] = s->h24;
    if (p->dst)
        p->dst->r = p->u.r;
}
