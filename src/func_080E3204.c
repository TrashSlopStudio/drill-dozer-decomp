#include "types.h"

extern u8 func_08019B88(void);

u32 func_080E3204(u8 *p) {
    if (func_08019B88() != 0)
        return 0;
    **(u32 **)(p + 8) = 1;
    return 2;
}
