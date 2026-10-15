#include "types.h"

extern s32 func_0800C1F4(u32);
extern s32 func_08056294(u32, u32);

u32 func_08099838(u32 a) {
    if (func_0800C1F4(*(u32 *)(a + 12)) != 2 && func_08056294(a, a + 60) != 0)
        return 1;
    return 0;
}
