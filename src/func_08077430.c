#include "types.h"

extern u8 *func_0801AF20(u32, u32);

void func_08077430(u32 a, u8 **b) {
    u8 *p = func_0801AF20(a, 2);
    b[2] = p;
    p[3] = 150;
}
