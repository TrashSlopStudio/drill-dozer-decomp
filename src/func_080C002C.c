#include "types.h"

extern void func_0801199C(u32, int);
extern void func_0802140C(u32, int);
extern void func_0803044C(u32, int, int);

int func_080C002C(u32 *p) {
    func_0801199C(p[29], 3);
    func_0802140C(p[29], 1);
    func_0803044C(p[29], 0, 0);
    p[0] = 41;
    return 0;
}
