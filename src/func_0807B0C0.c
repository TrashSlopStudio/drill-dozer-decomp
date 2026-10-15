#include "types.h"

extern u32 *gUnk_0203610C;

u32 func_0807B0C0(void) {
    if (gUnk_0203610C == 0)
        return 255;
    return *gUnk_0203610C;
}
