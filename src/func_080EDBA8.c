#include "types.h"

extern u32 gUnk_020391F4;
extern void func_0800098C(u32);
extern void func_080EDAC8(void);
extern void func_080097A0(u32);
extern void func_080C36CC(void);

void func_080EDBA8(void) {
    func_0800098C(gUnk_020391F4);
    func_080EDAC8();
    func_080097A0(gUnk_020391F4);
    gUnk_020391F4 = 0;
    func_080C36CC();
}
