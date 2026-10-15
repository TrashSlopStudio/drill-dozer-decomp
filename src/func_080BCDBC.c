#include "types.h"

extern void func_080EDBA8(void);

void func_080BCDBC(u8 *p) {
    if (p[3] != 0) {
        p[3] = 0;
        func_080EDBA8();
    }
}
