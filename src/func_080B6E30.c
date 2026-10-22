#include "types.h"

extern u32 gUnk_020391A0;
extern void func_080B024C(int);
extern int func_0800B3F4(void);
extern void func_0800CCA4(int, int, int, int, int);

void func_080B6E30(void) {
    gUnk_020391A0 = 2;
    func_080B024C(10);
    func_0800CCA4(func_0800B3F4(), 179, 255, 0, 0);
}
