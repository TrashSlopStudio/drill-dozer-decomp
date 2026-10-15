#include "types.h"

extern void func_080D2A68(u32, u8 **, u32);

u32 func_080D2D0C(u32 a, u8 **b) {
    if ((*b)[14] == 1)
        func_080D2A68(a, b, 0);
    return 1;
}
