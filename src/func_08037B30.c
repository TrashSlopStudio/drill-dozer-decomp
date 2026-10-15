#include "types.h"

u32 func_08037B30(u8 *p) {
    *(u32 *)(p + 0x100) = 1;
    *(u32 *)(p + 0x104) = 0;
    *(u32 *)(p + 0x48) = 5;
    return 1;
}
