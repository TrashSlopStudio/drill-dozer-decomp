#include "types.h"

extern void func_08021458(s32, s32);
extern void func_080F14C8(int, int);
int func_080F15A0(int a, int b, int c, int d) {
    func_08021458(*(s32 *)(a + 0x24), c);
    func_080F14C8(a, d);
    return 1;
}
