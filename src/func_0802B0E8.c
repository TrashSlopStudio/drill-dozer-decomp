#include "types.h"

extern u8 **gUnk_02035898;

void func_0802B0E8(u32 a) {
    if (gUnk_02035898 != 0)
        (*gUnk_02035898)[1] = a;
}
