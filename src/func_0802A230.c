#include "types.h"
extern u8 gUnk_02035890;
extern void func_080F7090(u16);
void func_0802A230(u16 a) {
    gUnk_02035890 = 1;
    func_080F7090(a);
    gUnk_02035890 = 0;
}
