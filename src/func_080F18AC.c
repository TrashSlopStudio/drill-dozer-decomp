#include "types.h"

extern void func_080F0898(int, u32);
extern void func_080F14C8(int, int);
int func_080F18AC(int a, int b, int c, int d) {
    func_080F0898(a, *(u32 *)(a + 0xC));
    func_080F14C8(a, d);
    return 1;
}
