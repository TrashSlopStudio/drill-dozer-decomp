#include "types.h"

extern u8 *gUnk_020391F0;

u32 func_080E4D00(void) {
    if (gUnk_020391F0 == 0)
        return 0;
    return gUnk_020391F0[21] != 0;
}
