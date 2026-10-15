#include "types.h"

extern void func_0800B3F4(void);
extern void func_08076330(void);
extern void func_080F718C(void *, u16);
extern u8 gUnk_03006AD0[];

void func_08029DF4(u8 a) {
    func_0800B3F4();
    func_08076330();
    func_080F718C(gUnk_03006AD0, a);
}
