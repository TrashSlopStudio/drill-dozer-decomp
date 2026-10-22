#include "types.h"
extern void func_080FAA68(u8 *, u32, u32);
extern u8 gUnk_0823E30B[];
u8 func_0802130C(u32 a) {
    u8 buf[3];
    u16 i = a;
    func_080FAA68(buf, (u32)gUnk_0823E30B, 3);
    if (i == 3)
        i = 0;
    return buf[(s16)i];
}
