#include "types.h"

extern void func_08030F20(u8 *, u32, u32);

void func_08031054(u8 *p, u32 b) {
    if (*(u32 *)(p + 0x204) == 0x156)
        func_08030F20(p, b, 1);
}
