#include "types.h"

struct S48 {
    u32 w[12];
};

struct P {
    u32 a;
    struct S48 *src;
    struct S48 dst;
};

extern void func_080DC48C(struct S48 *);

void func_080DC36C(u32 x, struct P *p) {
    p->dst = *p->src;
    func_080DC48C(p->src);
}
