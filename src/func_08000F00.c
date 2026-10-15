#include "types.h"

extern u8 gUnk_03000088[];
void func_08000EBC(u8);

void func_08000F00(void) {
    s32 i;
    for (i = 0; i < 96; i++) {
        if (gUnk_03000088[i] == 0xFF)
            return;
        func_08000EBC(gUnk_03000088[i]);
        gUnk_03000088[i] = 0xFF;
    }
}
