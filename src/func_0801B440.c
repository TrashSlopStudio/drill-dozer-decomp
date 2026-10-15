#include "types.h"

extern int func_08012D78(u8 *);

u32 func_0801B440(u8 *p) {
    if (func_08012D78(p + 44) == 1) {
        p[113] = 0;
        return 1;
    }
    return 0;
}
