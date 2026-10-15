#include "types.h"

extern u8 gUnk_02035880;

u32 func_08020520(void) {
    if (gUnk_02035880 == 1)
        return 1;
    return 0;
}
