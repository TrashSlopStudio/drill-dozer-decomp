#include "types.h"

extern u8 gUnk_020212A8[][12];

u8 func_080041F8(u8 id) {
    u8 n = 0;
    s32 i;

    for (i = 0; i < 32; i++) {
        if (gUnk_020212A8[i][0] == id)
            n++;
    }
    return n;
}
