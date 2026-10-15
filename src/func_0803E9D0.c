#include "types.h"

extern void func_0803D57C(u8 *);
extern u8 *func_0803EC74(u8 *);
extern u32 func_0803EC84(u32);
extern void func_0803ED20(u8 *);

void func_0803E9D0(u8 *p) {
    func_0803D57C(p);
    p = func_0803EC74(p);
    *(u32 *)(p + 0x44) = func_0803EC84(*(u32 *)(p + 4));
    func_0803ED20(p);
}
