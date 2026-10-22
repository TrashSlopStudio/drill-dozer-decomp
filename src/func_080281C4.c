#include "types.h"

extern u32 func_0801B670(void);

u32 func_080281C4(u8 *a) {
    u32 r = func_0801B670();
    if (r == 2)
        a[0x76] = 5;
    else if (r == 1)
        a[0x76] = 7;
    return r;
}
