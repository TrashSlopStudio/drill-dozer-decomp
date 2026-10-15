#include "types.h"

extern u32 func_08038EAC(u32, u32);
extern u32 func_08038E28(u32, u32);

u32 func_08038ED8(u32 a, u32 b) {
    if (func_08038EAC(a, b) == 0)
        return func_08038E28(a, b);
    return 0;
}
