#include "types.h"

extern int func_0802F478(int);
extern void func_080F14C8(int, int);
int func_080F155C(int a, int b, int c, int d) {
    if (func_0802F478(*(int *)(a + 0x24)) == 0)
        return 0;
    func_080F14C8(a, d);
    return 1;
}
