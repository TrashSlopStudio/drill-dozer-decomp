#include "types.h"
extern u32 func_08001728(u32);
extern u32 gUnk_02035868;
extern u32 gUnk_0203586C;
extern u8 gUnk_02035874;
void func_0801ADF0(void) {
    if (gUnk_02035868 == 0) {
        gUnk_0203586C = 0;
        gUnk_02035874 = 1;
        gUnk_02035868 = func_08001728(0x3F00);
    }
}
