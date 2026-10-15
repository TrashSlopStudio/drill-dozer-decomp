#include "types.h"

struct S08002BE4 {
    u32 a, b;
};

extern struct S08002BE4 gUnk_020211A4[];

u32 func_08002BE4(u8 i, struct S08002BE4 *s) {
    if (i < 32) {
        gUnk_020211A4[i] = *s;
        return 1;
    }
    return 0;
}
