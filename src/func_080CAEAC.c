#include "types.h"
extern u8 *gUnk_020391DC;
extern u8 *func_080CAE4C(u8 *);
u8 *func_080CAEAC(u8 *p) {
    u8 *q;
    if (gUnk_020391DC != 0)
        q = gUnk_020391DC;
    else
        q = func_080CAE4C(p);
    q[4]++;
    return q;
}
