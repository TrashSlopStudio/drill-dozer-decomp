#include "types.h"

extern u32 func_0802479C(u32 a, u32 b, u32 c, u32 *d);

u32 func_08024984(u32 a, u32 b, u32 c, u32 *out) {
    u32 t;
    u32 r = func_0802479C(a, b, c, &t);
    *out = r;
    if (r == 0)
        return 0;
    return 1;
}
