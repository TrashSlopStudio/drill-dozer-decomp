#include "types.h"

extern void func_08025E24(u8 *a, u8 *b);
extern void func_08025ED8(u8 *a, u8 *b, u32 c);
extern void func_0801AEF0(u8 *a, u32 b);

void func_08025D2C(u8 *a) {
    u8 *q = a + 0x7C;
    func_08025E24(a, q);
    func_08025ED8(a, q, 1);
    func_0801AEF0(a, *(u32 *)(a + 0x7C));
}
