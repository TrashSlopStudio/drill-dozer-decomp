#include "types.h"

extern void func_0801B1C4(u32);

void func_080B9CE4(u32 *p) {
    if (*p) {
        func_0801B1C4(*p);
        *p = 0;
    }
}
