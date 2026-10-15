#include "types.h"
extern void func_08019A90(u16, u16, u8, u16);
extern void func_08019C9C(u16, u16);
void func_08019D9C(u16 a, u16 b, u8 c, u16 d) {
    func_08019A90(a, b, c, d);
    func_08019C9C(a, b);
}
