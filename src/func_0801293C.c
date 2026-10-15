#include "types.h"

extern u8 func_080126B4(u16);

u32 func_0801293C(u16 a) {
    u32 r = func_080126B4(a);
    if (r - 10 <= 124)
        return 1;
    return 0;
}
