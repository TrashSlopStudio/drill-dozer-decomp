#include "types.h"

extern void func_080057F0(u32, u32, u32);
extern void func_0806C5CC(u32, u32, u32);

struct S {
    u32 a;
    u8 pad[32];
    u16 h24;
};

u32 func_0804DBB4(u32 unused, struct S *p) {
    p->h24 = 0;
    func_080057F0(p->a, 0, 0);
    func_0806C5CC(p->a, 3, 0);
    return 2;
}
