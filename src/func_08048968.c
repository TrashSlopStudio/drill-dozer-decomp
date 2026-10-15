#include "types.h"

extern s32 func_0800C1F4(s32);
extern s32 func_0802F478(s32);

s32 func_08048968(s32 a) {
    if ((u32)(func_0800C1F4(a) - 1) > 1 && func_0802F478(a) != 1)
        return 0;
    return 1;
}
