#include "types.h"

extern void func_080D77E0(u8 *, u8 *);
extern void func_080D7844(u8 *, u8 *);

void func_080D773C(u8 *p) {
    u8 *q = p + 0x7C;
    q[8] = 131;
    func_080D77E0(p, q);
    func_080D7844(p, q);
}
