#include "types.h"
extern void func_0800E2A8(int, int);
extern void func_080F14C8(int, int);
int func_080F1A80(u8 *a, int b, int c, int d) {
    func_0800E2A8(*(int *)(a + 0x24), c);
    func_080F14C8((int)a, d);
    return 1;
}
