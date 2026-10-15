#include "types.h"

extern u32 func_08001728(u32);
extern u32 gUnk_0203607C;

void func_0806F5B0(void) {
    u32 *p = &gUnk_0203607C;
    *p = func_08001728(28);
}
