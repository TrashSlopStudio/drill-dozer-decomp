#include "types.h"
extern void func_0801B064(u32);
void func_0806F450(u32 a, u32 *b) {
    u32 *p;
    s32 i;
    p = b + 1;
    i = 3;
    do {
        func_0801B064(*p++);
    } while (--i >= 0);
}
