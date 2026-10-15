#include "types.h"

extern void func_0802E57C(u32, u32 *);
extern u32 func_08012D04(u32 *, s16, s16);

u32 func_08073F5C(u32 a, s16 *b) {
    u32 x[2];
    func_0802E57C(a, x);
    return func_08012D04(x, b[0], b[1]);
}
