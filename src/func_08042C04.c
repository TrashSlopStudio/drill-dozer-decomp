#include "types.h"

extern u32 gUnk_082BD348[];

u32 func_08042C04(u32 a) {
    u32 i;
    for (i = 0; i < 2; i++) {
        if (a == gUnk_082BD348[i])
            return 1;
    }
    return 0;
}
