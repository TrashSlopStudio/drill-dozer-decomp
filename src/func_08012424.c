#include "types.h"

extern u32 func_08011ED4(u32, u32);

u32 func_08012424(u32 a, u32 b) {
    if (func_08011ED4(b, 2) != 0)
        return 1;
    return 0;
}
