#include "types.h"

extern u8 *gUnk_02036118;

void func_0807C43C(u8 a) {
    if (gUnk_02036118 != 0)
        (*(u8 **)(gUnk_02036118 + 0x24))[1] = a;
}
