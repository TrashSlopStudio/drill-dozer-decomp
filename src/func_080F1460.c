#include "types.h"

extern u32 func_080F0394(u32 a);
extern void func_080F13DC(u32 a, u32 b);
extern void func_080F03B8(u32 a, u32 b);
extern void func_080F0448(u32 a);

void func_080F1460(u32 a, u32 b, u32 c) {
    u32 r = func_080F0394(a);
    func_080F13DC(r, b);
    func_080F03B8(r, c);
    func_080F0448(r);
}
