#include "types.h"

u32 func_0803F90C(u8 *a) {
    s32 i;
    for (i = 1; i <= 9; i++) {
        if (((u32 *)(a + 164))[i] == 0)
            return 0;
    }
    return 1;
}
