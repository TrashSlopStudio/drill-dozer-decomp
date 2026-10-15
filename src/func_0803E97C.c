#include "types.h"

extern void func_0803EC58(u8 *);
extern u8 *func_0803EC74(u8 *);
extern u32 func_0803EC84(u32);

void func_0803E97C(u8 *p) {
    u8 *q;
    func_0803EC58(p);
    q = func_0803EC74(p);
    *(u32 *)(q + 68) = func_0803EC84(*(u32 *)(q + 4));
}
