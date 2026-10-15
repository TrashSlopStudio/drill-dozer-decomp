#include "types.h"
extern u16 gUnk_02034A3E[];

void func_08012568(u8 i, u16 v) {
    if (i != 255)
        gUnk_02034A3E[i] = v;
}
