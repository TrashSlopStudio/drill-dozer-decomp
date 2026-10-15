#include "types.h"

extern void func_080F3638(u8 *, u32, u32);

u32 func_080F3360(u8 *a, u32 b) {
    u8 *p = a + 0x74;
    if (*p == 0) {
        func_080F3638(a, b, 0);
        (*p)++;
    }
    return 4;
}
