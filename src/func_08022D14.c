#include "types.h"

extern void func_0800B5D8(u32, u16);

void func_08022D14(u8 *p) {
    u8 *q = p + 124;

    if (*(u16 *)(q + 22) != 0)
        func_0800B5D8(*(u32 *)(p + 12), *(u16 *)(q + 22));
}
