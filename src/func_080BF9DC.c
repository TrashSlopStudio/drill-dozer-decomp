#include "types.h"

extern s32 func_0800B510(u32);
extern s32 func_0803DB0C(u32);

u32 func_080BF9DC(u32 *p) {
    if (func_0800B510(p[0x74 / 4]) <= 0) {
        return 2;
    }
    if (func_0803DB0C(p[0x78 / 4]) == 0) {
        return 0;
    }
    p[0] = 19;
    return 1;
}
