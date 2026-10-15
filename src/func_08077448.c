#include "types.h"

extern void func_0801B064(u32);

void func_08077448(u32 a, u32 *p) {
    if (p[2] != 0) {
        func_0801B064(p[2]);
        p[2] = 0;
    }
}
