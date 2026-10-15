#include "types.h"

struct S {
    u32 a, b;
};

extern void func_08011824(u8 *, struct S *);
extern void func_0802F86C(u8 *, struct S *, u32);

void func_0802F8C4(u8 *p, u32 q) {
    struct S s;
    func_08011824(p, &s);
    func_0802F86C(p, &s, q);
}
