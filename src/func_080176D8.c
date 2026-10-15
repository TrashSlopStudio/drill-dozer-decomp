#include "types.h"

extern u32 func_080175A8(u32);
extern u8 *func_08011720(u32);

u32 func_080176D8(u32 a) {
    if (func_080175A8(a) == 2)
        return 0;
    return *(u32 *)(func_08011720(a) + 0x430);
}
