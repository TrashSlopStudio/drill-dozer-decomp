#include "types.h"

extern void func_0808E268(u8 *);

u32 func_0808EC4C(u8 *a, s32 *t) {
    if (++*t > 90)
        func_0808E268(a);
    return 0;
}
