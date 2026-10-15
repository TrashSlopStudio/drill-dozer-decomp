#include "types.h"

extern void func_08062284(u32, u32);

u32 func_080ABFC4(u8 *p) {
    if (*(u32 *)(p + 0x7C) == 0) {
        *(u32 *)(p + 0x7C) = 1;
        func_08062284(*(u32 *)(p + 0xC), 1);
    }
    return 0;
}
