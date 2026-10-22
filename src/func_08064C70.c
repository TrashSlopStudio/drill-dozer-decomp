#include "types.h"

extern u8 gUnk_08101E9C[];
extern u16 func_08015EDC(u32, s16, s16);

u8 func_08064C70(u32 *p, s16 x, s16 y) {
    u16 i = func_08015EDC(p[13], x, y);
    return gUnk_08101E9C[*(u8 *)(((u32 **)p[13])[0][2] + i)];
}
