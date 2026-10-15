#include "types.h"

extern vu16 gUnk_03004B30[];

void func_080006A8(void) {
    gUnk_03004B30[12] &= 0xFFFE;
    while (1) {
        if (gUnk_03004B30[12] & 1)
            break;
    }
}
