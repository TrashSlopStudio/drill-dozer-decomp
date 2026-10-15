#include "types.h"

extern u32 func_080F8744(s32);

u16 func_08048390(s32 x, s32 y) {
    u16 r = func_080F8744((x * x + y * y) << 4);
    return r >> 2;
}
