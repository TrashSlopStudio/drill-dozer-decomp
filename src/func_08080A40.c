#include "types.h"

extern u32 *func_0807E634(u32 a);

void func_08080A40(u32 a, u32 b, u32 c) {
    u32 *p = func_0807E634(a);
    p[2] = b;
    p[3] = c;
}
