#include "types.h"

extern void func_080A6EAC(u8 *);

u32 func_080A6A38(u8 *p) {
    u8 *q = p + 0x76;
    if (*q == 0) {
        func_080A6EAC(p);
        *q = 1;
    }
    return 0;
}
