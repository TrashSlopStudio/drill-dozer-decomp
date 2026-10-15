#include "types.h"

struct S08010A44 {
    u8 a;
    u8 pad;
    u16 b;
};

extern struct S08010A44 gUnk_02034758;

u16 func_08010A44(void) {
    if (gUnk_02034758.a == 0)
        return 0xFFFF;
    return gUnk_02034758.b;
}
