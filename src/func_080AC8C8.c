#include "types.h"

extern void func_0802140C(u32 a, u32 b);

u32 func_080AC8C8(u32 *p) {
    func_0802140C(p[10], 123);
    p[0] = 18;
    return 1;
}
