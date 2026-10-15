#include "types.h"

extern u8 func_080213C8(u8 *p);

u8 func_0806DDC4(u8 *p) {
    if (func_080213C8(p) == 1)
        return 2;
    return 0;
}
