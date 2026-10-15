#include "types.h"

extern u8 *gUnk_020358CC;

u8 func_0802C630(u8 i) {
    u8 *p = gUnk_020358CC;
    p += i * 244;
    return p[74];
}
