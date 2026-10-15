#include "types.h"

extern void func_0801B064(u32);

void func_08093A04(u32 a, u32 *p) {
    if (p[9] != 0) {
        func_0801B064(p[9]);
        p[9] = 0;
    }
}
