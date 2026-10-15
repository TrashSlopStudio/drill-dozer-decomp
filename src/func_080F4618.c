#include "types.h"

extern void func_0805007C(u32 *);

void func_080F4618(u32 *a) {
    if (a[7] != 0)
        func_0805007C(a + 7);
}
