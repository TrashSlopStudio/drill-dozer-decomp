#include "types.h"

extern u32 func_0800B4D0(u32, u32);
extern u32 func_0800BE5C(u32);

u32 func_0806505C(u32 a) {
    if (func_0800B4D0(a, 1) || func_0800BE5C(a))
        return 1;
    return 0;
}
