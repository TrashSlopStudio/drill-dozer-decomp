#include "types.h"

extern u16 gUnk_030000EA;
extern u8 gUnk_030000E8;
extern void func_08000FF8(void);
extern void func_08001084(u16);

void func_0800102C(u16 a) {
    gUnk_030000EA |= a;
    gUnk_030000E8 = 1;
    func_08000FF8();
    func_08001084(gUnk_030000EA);
}
