#include "types.h"
extern void func_08030190(u32 a, s16 b, s16 c);
extern void func_080B06EC(u32 *p);
u32 func_080B0DEC(u32 *p) {
    u32 a = p[0];
    s16 *q = (s16 *)p[1];
    func_08030190(a, q[2], q[4]);
    func_080B06EC(p);
    return 0;
}
