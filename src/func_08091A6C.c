#include "types.h"

extern void func_0801CE04(void *);
extern void func_080916C0(void *, int, int);

void func_08091A6C(u8 *p) {
    func_0801CE04(p);
    func_080916C0(p, 1, 31);
    p[0x76] = 7;
    p[0x78] = 2;
    *(u32 *)(p + 0x84) = 0x10000;
}
