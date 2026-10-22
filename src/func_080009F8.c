#include "types.h"
extern u8 func_08000E64(u8);
extern u32 gUnk_03000010[];
extern u32 gUnk_080FAB54;
void func_080009F8(u8 a) {
    if (!func_08000E64(a)) {
        gUnk_03000010[a] = gUnk_080FAB54;
    }
}
