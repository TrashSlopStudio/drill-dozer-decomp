#include "types.h"

extern u16 func_080119F0(u16 *p, u32 m);

u32 func_0809B648(u16 *p) {
    if (func_080119F0(p, 2) != 0)
        return 1;
    return 0;
}
