#include "types.h"

extern u8 *func_0802FD44(void *p);

u32 func_080303F4(void *p) {
    if (*(u32 *)(func_0802FD44(p) + 8) & 4)
        return 0;
    return 1;
}
