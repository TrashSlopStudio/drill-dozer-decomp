#include "types.h"

struct S {
    u32 a;
    u32 b;
};

extern void func_080150B0(struct S *, u32);
extern u32 func_08014AF8(u32, struct S *, u32, u32);

u32 func_080150F4(u32 a, u32 b, u32 c, u32 d) {
    struct S s;
    func_080150B0(&s, b);
    return func_08014AF8(a, &s, c, d);
}
