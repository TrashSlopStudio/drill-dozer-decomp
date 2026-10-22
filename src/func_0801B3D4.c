#include "types.h"
struct S {
    u8 pad[37];
    u8 lo : 4;
    u8 hi : 4;
};
extern struct S *func_0801AF9C(u32, u8);
extern u32 func_08012810(u32);
struct S *func_0801B3D4(u32 a, u8 b, u32 c) {
    struct S *p = func_0801AF9C(a, b);
    p->hi = func_08012810(c);
    return p;
}
