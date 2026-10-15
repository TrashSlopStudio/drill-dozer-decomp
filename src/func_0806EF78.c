#include "types.h"

extern u32 func_0806ED80(u8 *p, u8 *q);
extern void func_0801AEF0(u8 *p, u32 v);

void func_0806EF78(u8 *p) {
    u8 *q = p + 124;
    if (func_0806ED80(p, q))
        func_0801AEF0(p, *(u32 *)(q + 12));
}
