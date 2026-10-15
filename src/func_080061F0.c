#include "types.h"

struct S {
    u32 a;
    u32 b;
};
struct R {
    u32 x;
    struct S s;
};
extern struct R gUnk_02023848[];
extern void func_08002C4C(struct S *, u8, u32, u32);
void func_080061F0(u8 i) {
    struct R *r = &gUnk_02023848[i];
    func_08002C4C(&r->s, i, 1, 2);
}
