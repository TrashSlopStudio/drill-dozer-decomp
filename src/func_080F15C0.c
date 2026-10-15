#include "types.h"
extern void func_0802140C(int, int);
extern void func_080F14C8(u8 *, int);

int func_080F15C0(u8 *a, int b, int c, int d) {
    func_0802140C(*(int *)(a + 0x24), c);
    func_080F14C8(a, d);
    return 1;
}
