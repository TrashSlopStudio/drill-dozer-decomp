#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_0808FFAC(u8 *, u8 *);

void func_080904A0(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801BF48(q, *(u32 *)(q + 8));
    func_0808FFAC(p, q);
}
