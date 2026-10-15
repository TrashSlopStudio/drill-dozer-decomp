#include "types.h"

extern u32 *func_08066D60(void);

u32 func_080671AC(void) {
    u32 *p = func_08066D60();
    if (p == 0)
        return 0;
    if (*p == 4)
        return 1;
    return 2;
}
