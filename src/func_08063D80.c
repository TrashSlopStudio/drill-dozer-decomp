#include "types.h"

extern u8 *gUnk_02036044;

void func_08063D80(u8 a) {
    if (gUnk_02036044 != 0)
        (*(u8 **)(gUnk_02036044 + 8))[1] = a;
}
