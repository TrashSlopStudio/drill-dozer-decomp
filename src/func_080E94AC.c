#include "types.h"
extern u8 func_08019B88(void);

u32 func_080E94AC(u32 *p) {
    if (func_08019B88() != 0)
        return 0;
    *p = 19;
    return 1;
}
