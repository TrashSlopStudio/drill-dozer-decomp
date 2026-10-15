#include "types.h"

extern u32 gUnk_083631D4[];

void func_08075A90(u32 a, u32 *p) {
    if (a == 0)
        *p = gUnk_083631D4[*p];
}
