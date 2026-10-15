#include "types.h"

extern void func_080F2F44(u8 *, u8 *);
extern void func_08001768(u32);

void func_080F2C48(u8 *p) {
    u8 *q = p + 0x7C;
    func_080F2F44(p, q);
    func_08001768(*(u32 *)(q + 0x10));
}
