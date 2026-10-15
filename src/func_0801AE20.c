#include "types.h"

extern u32 gUnk_02035868;
extern void func_08001768(u32);

void func_0801AE20(void) {
    if (gUnk_02035868 != 0) {
        func_08001768(gUnk_02035868);
        gUnk_02035868 = 0;
    }
}
