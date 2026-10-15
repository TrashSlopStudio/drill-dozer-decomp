#include "types.h"

extern u32 func_08008900(u16);
extern u32 func_08015D14(u8);

u32 func_0800D3E0(u8 *p) {
    u32 t = (u8)func_08008900(*(u16 *)(p + 16));
    if (t != 194 && t != 195 && func_08015D14(t) != 0)
        return 1;
    return 0;
}
