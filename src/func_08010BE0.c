#include "types.h"

struct S {
    u32 a : 14;
    u32 b : 16;
};
extern struct S gUnk_0203476C;

u32 func_08010BE0(void) {
    if (gUnk_0203476C.b == 0)
        return 0;
    return 1;
}
