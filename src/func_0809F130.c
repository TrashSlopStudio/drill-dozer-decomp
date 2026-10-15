#include "types.h"
extern u8 *func_0801AF9C(u32, u32);

void func_0809F130(u32 a, u8 *b) {
    u8 *r = func_0801AF9C(a, 3);
    *(u8 **)(b + 4) = r;
    r[3] = 150;
}
