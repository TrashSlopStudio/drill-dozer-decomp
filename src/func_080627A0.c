#include "types.h"

extern u8 **gUnk_0203603C;
extern void func_080629C4(u8, u32);

u32 func_080627A0(u32 a) {
    func_080629C4(gUnk_0203603C[4][4], a);
    return 1;
}
