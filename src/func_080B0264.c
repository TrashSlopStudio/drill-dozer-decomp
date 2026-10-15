#include "types.h"

extern void func_080B0510(u32, u32, u32 *);

void func_080B0264(u32 *p, u32 a) {
    func_080B0510(p[0], a, p);
    p[13] = 0;
}
