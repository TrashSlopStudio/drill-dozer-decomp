#include "types.h"

extern void func_0801B1C4(u8 *);

void func_080BDBF8(u8 **p) {
    if (*p != 0) {
        func_0801B1C4(*p);
        *p = 0;
    }
}
