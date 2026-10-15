#include "types.h"

struct S {
    u8 a;
    u8 b;
    u8 pad[18];
    u16 x;
    u16 y;
};

extern void func_08005814(struct S *, u32);
extern u32 gUnk_08236F6C[];

void func_0801D550(struct S *p, u16 x, u16 y, u8 idx) {
    u8 z = 0;
    p->x = x;
    p->y = y;
    p->b = z;
    func_08005814(p, gUnk_08236F6C[idx]);
}
