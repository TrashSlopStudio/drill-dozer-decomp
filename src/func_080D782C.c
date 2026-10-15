#include "types.h"

extern void func_0801B064(u32);

void func_080D782C(u32 a, u32 *p) {
    s32 i = 1;

    do {
        func_0801B064(*p++);
    } while (--i >= 0);
}
