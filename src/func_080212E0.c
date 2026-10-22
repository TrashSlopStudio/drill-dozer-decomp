#include "types.h"

extern u8 gUnk_0823E308[];
extern void func_080FAA68(void *, void *, int);

u8 func_080212E0(s16 a) {
    u8 v[3];
    func_080FAA68(v, gUnk_0823E308, 3);
    if (a == 3)
        a = 0;
    return v[a];
}
