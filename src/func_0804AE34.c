#include "types.h"
u8 *func_0804AE34(u8 *p, u8 v, u16 n) {
    u16 i;
    for (i = 0; i < n; i++) {
        *p = v;
        p++;
    }
    *p = 0xFF;
    return p;
}
