#include "types.h"

extern u8 *func_0803EC74(u32);
extern void func_080067CC(u8 *, u8 *);
extern void func_08005560(u8 *);

void func_08040504(u32 a) {
    u8 *p = func_0803EC74(a);
    *(u32 *)(p + 16) = (*(u8 **)(p + 68))[1];
    func_080067CC(*(u8 **)(p + 68), p + 60);
    func_08005560(*(u8 **)(p + 68));
}
