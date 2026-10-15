#include "types.h"

extern u32 func_080175B8(u32);
extern u32 func_08056294(u8 *, u8 *);

u32 func_080276E8(u8 *p) {
    if (func_080175B8(*(u32 *)(p + 12)) <= 1 || func_08056294(p, p + 60) == 0)
        return 0;
    return 1;
}
