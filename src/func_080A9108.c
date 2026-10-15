#include "types.h"

extern void func_080A8890(u8 *, u8 *, u32);

u32 func_080A9108(u8 *a, u8 *b) {
    if ((*(u8 **)(b + 0x34))[14] == 1)
        func_080A8890(a, b, 10);
    return 1;
}
