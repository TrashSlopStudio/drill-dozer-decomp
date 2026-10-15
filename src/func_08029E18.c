#include "types.h"

extern u16 gUnk_03006AD0[];

u32 func_08029E18(void) {
    if (gUnk_03006AD0[2] == 0)
        return 1;
    return 0;
}
