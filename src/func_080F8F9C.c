#include "types.h"

extern u8 gUnk_030042AC;
extern void func_080F8E14(u32);

void func_080F8F9C(u32 a) {
    func_080F8E14(0);
    gUnk_030042AC = a;
}
