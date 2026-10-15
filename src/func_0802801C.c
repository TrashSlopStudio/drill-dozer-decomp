#include "types.h"
extern int func_0801CE10(void *);
extern void func_08027BDC(void *, int);
int func_0802801C(u8 *a, int b) {
    *(int *)(a + 0x4c) = 0;
    if (func_0801CE10(a) != 1)
        goto out;
    a[0x76] = 1;
    func_08027BDC(a, b);
out:
    return 1;
}
