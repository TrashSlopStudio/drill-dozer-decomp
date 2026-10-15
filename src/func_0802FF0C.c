#include "types.h"

extern s32 func_0802FE7C(u8 *);

u32 func_0802FF0C(u8 *p) {
    if (*(u32 *)(p + 0x74) == 0 && func_0802FE7C(p) <= 2)
        return 0;
    return 1;
}
