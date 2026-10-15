#include "types.h"

extern u32 gUnk_020391A4;
extern void func_080B6E5C(void);
extern void func_080B7068(u32);

void func_080B6DD0(u32 a) {
    gUnk_020391A4 = a;
    func_080B7068((u32)func_080B6E5C);
}
