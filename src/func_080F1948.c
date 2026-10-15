#include "types.h"

extern void func_080118BC(u32, u32);
extern void func_080F14C8(int, int);
int func_080F1948(int a, int b, int c, int d) {
    func_080118BC(*(u32 *)(a + 0x24), c);
    func_080F14C8(a, d);
    return 1;
}
