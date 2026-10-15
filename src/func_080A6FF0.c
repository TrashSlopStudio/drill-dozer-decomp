#include "types.h"

extern u8 *func_0801BC0C(u32 *a, u32 b);

void func_080A6FF0(void) {
    u32 v = 0;
    u8 *p = func_0801BC0C(&v, 306);
    if (p != 0)
        (*(u8 **)(p + 0x7C))[1] = 1;
}
