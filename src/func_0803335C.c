#include "types.h"
struct S {
    u8 pad[6];
    u16 f;
};
extern struct S *func_08002DD0(void);
u32 func_0803335C(void) {
    struct S *p = func_08002DD0();
    if ((p->f & 8) || (p->f & 1))
        return 1;
    return 0;
}
