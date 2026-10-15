#include "types.h"

extern void func_0801B064(u32);

void func_08052980(u32 a, u32 *p) {
    func_0801B064(p[5]);
    func_0801B064(p[6]);
    func_0801B064(p[12]);
    p[5] = 0;
    p[6] = 0;
    p[12] = 0;
}
