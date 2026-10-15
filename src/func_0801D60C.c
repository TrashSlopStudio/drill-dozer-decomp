#include "types.h"

void func_0801D60C(u8 *p) {
    u8 v = 1;
    u8 **q = (u8 **)(p + 36);
    s32 i;

    for (i = 3; i >= 0; i--) {
        (*q++)[1] = v;
    }
}
