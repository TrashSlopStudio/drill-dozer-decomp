#include "types.h"

extern u8 *gUnk_02036040;

void func_08063C80(u8 a) {
    if (gUnk_02036040 != 0)
        (*(u8 **)(gUnk_02036040 + 8))[1] = a;
}
