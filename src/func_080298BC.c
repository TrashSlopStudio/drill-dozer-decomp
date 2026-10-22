#include "types.h"
extern s32 func_0801B670(void);
s32 func_080298BC(u8 *p) {
    s32 r = func_0801B670();
    if (r == 2) {
        p[0x76] = 7;
    } else if (r == 1) {
        p[0x76] = 5;
    }
    return r;
}
