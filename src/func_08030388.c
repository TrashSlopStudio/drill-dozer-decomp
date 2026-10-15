#include "types.h"

extern u8 *func_0802FD44(void *p);

u32 func_08030388(void *p) {
    if (*(u32 *)(func_0802FD44(p) + 8) & 2)
        return 1;
    return 0;
}
