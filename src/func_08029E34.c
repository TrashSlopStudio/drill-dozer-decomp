#include "types.h"

extern u8 gUnk_03005440;
extern void func_0802A210(u16 a);

void func_08029E34(u16 a) {
    if (gUnk_03005440)
        a = 0;
    func_0802A210(a);
}
