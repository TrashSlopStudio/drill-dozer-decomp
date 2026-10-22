#include "types.h"
extern u32 func_0801B5D0(void);
u32 func_08028198(u8 *a) {
    u32 r = func_0801B5D0();
    if (r == 2) {
        a[0x76] = 5;
    } else if (r == 1) {
        a[0x76] = 7;
    }
    return r;
}
