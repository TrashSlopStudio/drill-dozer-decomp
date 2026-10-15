#include "types.h"

extern u32 *gUnk_0203610C;
extern void func_0807BBA0(void);
extern void func_0800089C(void (*)(void), u32, u32);

void func_0807B09C(void) {
    if (gUnk_0203610C != 0) {
        *gUnk_0203610C = 2;
        func_0800089C(func_0807BBA0, 0, 50);
    }
}
