#include "types.h"
extern s8 gUnk_020360F4[];
extern void func_08044BBC(void);
void func_08073F14(void) {
    gUnk_020360F4[4] &= ~2;
    func_08044BBC();
}
