#include "types.h"

extern u8 *func_0802FD90(void);

u32 func_08075224(void) {
    if (*(u32 *)(func_0802FD90() + 4) == 8)
        return 0;
    return 1;
}
