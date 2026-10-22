#include "types.h"

extern u32 gUnk_02039168;
extern void func_0807E7F4(void);

void func_0807E8B8(void) {
    if (gUnk_02039168 == 1) {
        func_0807E7F4();
        gUnk_02039168 = 0;
    }
}
