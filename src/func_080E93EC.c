#include "types.h"

extern void func_080E94CC(u32);
extern void func_08019084(int, int, int, int, int);

u32 func_080E93EC(u32 *p) {
    func_080E94CC(p[14]);
    func_08019084(-1, -2, 0, 16, 0);
    *p = 21;
    return 0;
}
