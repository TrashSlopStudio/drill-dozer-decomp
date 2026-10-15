#include "types.h"

extern void func_080D7844(u8 *, u8 *);
extern void func_0801C010(u8 *, u8 *);

void func_080D7760(u8 *p) {
    func_080D7844(p, p + 124);
    func_0801C010(p, p + 133);
}
