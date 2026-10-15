#include "types.h"

extern u32 *func_0807E634(u32 a);
extern void func_080057F0(u32, u32, u32);

void func_080DC4D8(u32 a, u32 b) {
    u32 *p = func_0807E634(a);
    p[0] = b;
    func_080057F0(p[1], 0, 0);
}
