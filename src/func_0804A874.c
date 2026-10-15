#include "types.h"

extern u8 gUnk_082D7A24[];

u8 func_0804A874(u16 a) {
    if (a == 0)
        return 4;
    return gUnk_082D7A24[a];
}
