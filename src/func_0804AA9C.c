#include "types.h"

extern u8 gUnk_082EBC3C[];

u8 func_0804AA9C(u16 a) {
    if (a == 0)
        return 10;
    return gUnk_082EBC3C[a];
}
