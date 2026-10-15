#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 lo : 12;
    u32 v : 5;
};

extern struct S gUnk_02035454;
extern u8 func_08019B88(void);

u32 func_08019928(void) {
    u32 v;
    if (!func_08019B88() || (v = gUnk_02035454.v) == 0)
        return 0;
    return 4 - v;
}
