#include "types.h"
extern u8 gUnk_0823E2F3[];
extern void func_080FAA68(void *, void *, int);
u8 func_080211AC(u16 a) {
    u8 buf[3];
    func_080FAA68(buf, gUnk_0823E2F3, 3);
    if (a == 3)
        a = 0;
    return buf[(s16)a];
}
