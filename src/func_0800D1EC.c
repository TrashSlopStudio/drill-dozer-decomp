#include "types.h"

extern u32 func_08008900(u16);
extern u32 func_08015D14(u8);

u32 func_0800D1EC(u8 *p) {
    if (func_08015D14(func_08008900(*(u16 *)(p + 16))) != 0)
        return 1;
    return 0;
}
