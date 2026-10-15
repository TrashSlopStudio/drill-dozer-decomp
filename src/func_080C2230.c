#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_08005560(u32);

void func_080C2230(u32 a, u8 *p) {
    u8 *e = *(u8 **)(p + 12);
    *(u16 *)(p + 8) = *(u16 *)(e + 20);
    *(u16 *)(p + 10) = *(u16 *)(e + 22);
    func_080067CC((u32)e, p + 16);
    func_08005560(*(u32 *)(p + 12));
}
