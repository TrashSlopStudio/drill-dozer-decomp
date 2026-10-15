#include "types.h"

extern u8 func_08019B88(void);

u32 func_080BFEA0(u32 *p) {
    if (func_08019B88() == 0)
        *p = 36;
    return 0;
}
