#include "types.h"

extern u32 gUnk_020391A0;
extern void func_080B024C(u32);
extern void func_0801B680(void);
extern void func_0801AE20(void);
extern void func_08009878(u32);

void func_080B6EAC(void) {
    gUnk_020391A0 = 3;
    func_080B024C(10);
    func_0801B680();
    func_0801AE20();
    func_08009878(179);
}
