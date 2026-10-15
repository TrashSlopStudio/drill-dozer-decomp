#include "types.h"

extern u16 func_08036430(u8 *p);
extern u32 *gUnk_082ADEDC[];

u32 func_080363C4(u8 *p) {
    u32 i = func_08036430(p) >> 5;
    return gUnk_082ADEDC[*(u32 *)(p + 0xA0)][i];
}
