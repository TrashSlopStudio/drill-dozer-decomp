#include "types.h"

extern void func_0805009C(u8 *, u32);

void func_080F4630(u8 *p, u32 a) {
    if (*(u32 *)(p + 28) != 0)
        func_0805009C(p + 28, a);
}
