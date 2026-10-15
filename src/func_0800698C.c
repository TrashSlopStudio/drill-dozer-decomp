#include "types.h"

extern u16 *func_080069A8(u16 a);

u16 func_0800698C(u16 a) {
    u16 *p = func_080069A8(a);
    if (p != 0)
        return p[2];
    return 0x400;
}
