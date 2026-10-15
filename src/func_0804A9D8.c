#include "types.h"

extern u8 gUnk_082E3B24[];

u8 func_0804A9D8(u16 a) {
    if (a == 0)
        return 10;
    return gUnk_082E3B24[a];
}
