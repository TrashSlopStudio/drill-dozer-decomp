#include "types.h"

extern void func_08006CBC(u32);

void func_08060144(u32 a, u32 *p) {
    s32 i;

    i = 5;
    do {
        func_08006CBC(*p++);
    } while (--i >= 0);
}
