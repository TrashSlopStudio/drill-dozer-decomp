#include "types.h"

extern void func_08008860(u32, u32, u32);
extern void func_0800FE34(void *);

void func_080730EC(u8 *a) {
    func_08008860(*(u32 *)(a + 0x34), 0, 2);
    func_08008860(*(u32 *)(a + 0x34), 0, 3);
    a[0x15] = 0;
    func_0800FE34(a);
}
