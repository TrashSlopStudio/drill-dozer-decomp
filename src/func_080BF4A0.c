#include "types.h"

extern u32 func_0806B864(void);

u32 func_080BF4A0(u8 *p) {
    if (func_0806B864() == 1)
        return 1;
    *(u32 *)(p + 0x40) = 0;
    return 0;
}
