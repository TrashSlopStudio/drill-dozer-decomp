#include "types.h"

extern u8 func_080118A8(u32);

u32 func_080ACCE4(u32 *p) {
    if (func_080118A8(p[4]) != 32) {
        p[0]++;
        return 1;
    }
    return 0;
}
