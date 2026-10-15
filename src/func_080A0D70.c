#include "types.h"

extern u32 func_080A1880(u32);
extern void func_080A1878(u32, u32);

u32 func_080A0D70(u32 a, u32 b) {
    if (func_080A1880(b) == 1) {
        func_080A1878(b, 2);
        return 1;
    }
    return 0;
}
