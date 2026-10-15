#include "types.h"

extern u8 func_080118A8(u32);

u32 func_080BFF14(u32 *a) {
    u8 r = func_080118A8(a[29]);
    if (r > 1 && r != 15)
        return 0;
    a[0] = 38;
    return 1;
}
