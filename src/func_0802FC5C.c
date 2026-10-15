#include "types.h"

extern u8 *func_080560D0(void);
extern int func_080560D8(u8 *);

u32 func_0802FC5C(void) {
    if (func_080560D8(func_080560D0() + 0x1C8) != 0)
        return 0;
    return 1;
}
