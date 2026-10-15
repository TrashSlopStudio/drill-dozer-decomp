#include "types.h"

extern u8 func_08019B88(void);
extern u8 gUnk_02035454[];

void func_08019230(void) {
    if (func_08019B88() == 1) {
        u8 *p = gUnk_02035454;
        p[10] |= 0x80;
    }
}
