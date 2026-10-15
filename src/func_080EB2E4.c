#include "types.h"

extern void func_080057F0(u32, u32, u32);
extern void func_08005814(u32, u32);

void func_080EB2E4(u32 *p, u32 a) {
    if (p[5] != a) {
        p[5] = a;
        func_080057F0(p[4], 0, 0);
    }
    func_08005814(p[4], p[5]);
}
