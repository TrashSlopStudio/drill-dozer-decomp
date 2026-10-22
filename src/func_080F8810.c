#include "types.h"
extern u16 gUnk_030042A2;
extern u8 gUnk_03006C20;
void func_080F8810(void) {
    if (*(volatile u16 *)&gUnk_030042A2 != 0) {
        gUnk_030042A2--;
        if (gUnk_030042A2 == 0)
            gUnk_03006C20 = 1;
    }
}
