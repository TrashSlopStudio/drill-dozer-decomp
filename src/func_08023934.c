#include "types.h"

extern u32 func_08023A9C(u32, u32, u32);

u32 func_08023934(u32 a, u32 b) {
    if (func_08023A9C(a, 49, b) && func_08023A9C(a, 50, b))
        return 1;
    return 0;
}
