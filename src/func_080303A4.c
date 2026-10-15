#include "types.h"

extern u8 *func_0802FD44(void *p);
extern u32 func_08017E54(u8 *);

u32 func_080303A4(u8 *a) {
    if ((*(u32 *)(func_0802FD44(a) + 8) & 1) && func_08017E54(a) == 0)
        return 1;
    return 0;
}
