#include "types.h"

extern u16 func_080177F0(u32);
extern u8 func_080175A8(u32);

void func_0801BE08(u8 *p) {
    *(u16 *)(p + 100) = func_080177F0(*(u32 *)(p + 12));
    p[102] = func_080175A8(*(u32 *)(p + 12));
}
