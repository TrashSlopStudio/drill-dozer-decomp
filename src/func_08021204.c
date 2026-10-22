#include "types.h"
extern u8 gUnk_0823E2F9[];
extern void func_080FAA68(void *, void *, int);
u8 func_08021204(u16 a) {
    u8 buf[3];
    func_080FAA68(buf, gUnk_0823E2F9, 3);
    if (a == 3)
        a = 0;
    return buf[(s16)a];
}
