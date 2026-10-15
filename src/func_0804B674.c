#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_0804BB54(u8 *, u8 *);

void func_0804B674(u8 *p) {
    u8 *q = p + 0x7C;
    func_0801BF48(p + 0x9C, *(u32 *)(q + 0x10));
    func_0801BF48(p + 0xA4, *(u32 *)(q + 0x18));
    func_0804BB54(p, q);
}
