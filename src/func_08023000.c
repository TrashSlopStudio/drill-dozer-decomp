#include "types.h"

extern void func_0800F950(u32, u16);

void func_08023000(u8 *p) {
    if (*(u32 *)(p + 0x7C) == 1)
        func_0800F950(*(u32 *)(p + 12), *(u16 *)(p + 24));
}
