#include "types.h"

extern void func_080762F8(u8 *p, u32 a);
extern void func_08029BE4(u16 a, u8 b);

void func_0807640C(u8 *p, u32 a, u8 b) {
    func_080762F8(p, a);
    func_08029BE4(a, b);
}
