#include "types.h"

extern void func_080067CC(u32, u8 *);
extern void func_08005560(u32);

void func_080EB054(u8 *p) {
    u8 *q = p + 0x7C;
    func_080067CC(*(u32 *)(q + 16), p + 0x94);
    func_08005560(*(u32 *)(q + 16));
}
