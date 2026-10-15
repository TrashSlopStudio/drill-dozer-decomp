#include "types.h"

extern void func_08044E64(u8 *);

void func_080A9B78(u8 *p) {
    u8 *q = p + 0x7C;
    u8 *s = *(u8 **)(q + 4);
    *(u16 *)(q + 28) = *(u16 *)(s + 20);
    *(u16 *)(q + 30) = *(u16 *)(s + 22);
    func_08044E64(p + 0x80);
}
