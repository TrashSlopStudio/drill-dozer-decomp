#include "types.h"
extern void func_0807319C(void);
extern void *func_08001728(u32);
extern void func_0800089C(void *, void *, u32);
void func_08073160(u32 a, u32 b) {
    u32 *p;
    *(u8 *)(a + 21) = 2;
    p = func_08001728(8);
    p[0] = a;
    *(u8 *)(p + 1) = b;
    func_0800089C(func_0807319C, p, 0x1801);
}
