#include "types.h"

struct S {
    struct S *e;
    u8 pad[0x28];
    u16 a;
    u16 b;
};

extern void func_0806B820(struct S *);
extern void func_0806891C(struct S *);

u32 func_08068C70(struct S *p) {
    p->e->a = 0;
    p->e->b = 0;
    func_0806B820(p->e);
    func_0806891C(p);
    return 0;
}
