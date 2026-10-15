#include "types.h"

extern void func_080206A0(u8, u8 *, u8 *);

void func_08067234(u8 *p) {
    if (p[12] == 0)
        func_080206A0(p[14], p + 25, p + 24);
}
