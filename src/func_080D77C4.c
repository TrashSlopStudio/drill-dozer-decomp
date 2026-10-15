#include "types.h"

extern void func_080D77E0(u8 *, u8 *);
extern void func_080D7844(u8 *, u8 *);

void func_080D77C4(u8 *p) {
    u8 *q = p + 124;
    func_080D77E0(p, q);
    func_080D7844(p, q);
}
