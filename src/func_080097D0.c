#include "types.h"

extern u8 gUnk_020345C8[];
extern void func_08009E78(void);

void func_080097D0(void) {
    gUnk_020345C8[18] = 1;
    gUnk_020345C8[19] = 255;
    func_08009E78();
}
