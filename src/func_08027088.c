#include "types.h"

extern void func_0801BF48(void *, void *);
extern void func_0801B064(void *);

void func_08027088(u8 *p) {
    u8 *q = p + 0x7c;
    *(u16 *)(q + 0x18) = *(u16 *)(*(u8 *volatile *)(p + 0x7c) + 0x18);
    *(u16 *)(q + 0x1a) = *(u16 *)(*(u8 *volatile *)(p + 0x7c) + 0x1a);
    func_0801BF48(p + 0x8c, *(void *volatile *)(p + 0x7c));
    func_0801B064(*(void *volatile *)(p + 0x7c));
}
