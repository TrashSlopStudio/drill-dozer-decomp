#include "types.h"

struct S {
    u32 a, b, c;
};

extern u32 func_08011720(u32);
extern void func_0806D550(u32, u32, struct S *);

void func_0803062C(u32 p, u32 a, u32 b, u32 c) {
    struct S s;
    u32 r = func_08011720(p);
    s.a = a;
    s.b = b;
    s.c = c;
    func_0806D550(r, 1, &s);
}
