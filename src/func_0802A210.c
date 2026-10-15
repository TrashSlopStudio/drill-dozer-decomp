#include "types.h"
extern u8 gUnk_02035890;
extern void func_080F6FC4(u16);
void func_0802A210(u16 a) {
    gUnk_02035890 = 1;
    func_080F6FC4(a);
    gUnk_02035890 = 0;
}
