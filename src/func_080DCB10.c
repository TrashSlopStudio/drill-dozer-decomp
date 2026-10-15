#include "types.h"

extern void func_080067CC(u8 *, u8 *);
extern void func_0807E98C(u8 *);

void func_080DCB10(u32 a, u8 *p) {
    u8 *q = *(u8 **)(p + 32);
    *(u32 *)(p + 28) = q[1];
    func_080067CC(q, p + 36);
    func_0807E98C(*(u8 **)(p + 32));
}
