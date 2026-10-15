#include "types.h"

extern u32 func_08090A0C(void);

u32 func_08090A20(void) {
    if (func_08090A0C() != 0)
        return 1;
    return 0;
}
