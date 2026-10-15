#include "types.h"

extern u8 gUnk_08451BCC[][32];

u8 *func_080C3888(u8 a) {
    if (a > 4)
        a = 1;
    return gUnk_08451BCC[a];
}
