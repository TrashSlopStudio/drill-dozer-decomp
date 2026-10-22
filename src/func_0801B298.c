#include "types.h"
struct S {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
    u8 e;
};
extern u32 func_0801B188(u32 a, struct S *s, u32 c);
u32 func_0801B298(u32 a, u16 b, u16 c, u16 d, u16 e) {
    struct S s;
    s.d = b;
    s.a = c;
    s.e = 255;
    s.b = d;
    s.c = e;
    return func_0801B188(a, &s, 0);
}
