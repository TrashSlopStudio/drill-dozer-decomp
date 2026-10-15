#include "types.h"

extern u32 *func_0807E634(u32 a);

void func_080ACB78(u32 a, u32 b) {
    u32 *p = func_0807E634(a);
    p[1] = b;
    p[0] = 0;
}
