#include "types.h"

extern u16 func_08036430(u8 *p);
extern u32 *gUnk_082ADE94[];

u32 func_08036374(u8 *p) {
    u32 i = func_08036430(p) >> 5;
    return gUnk_082ADE94[*(u32 *)(p + 0xA0)][i];
}
