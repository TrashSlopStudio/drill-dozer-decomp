#include "types.h"
extern u8 *func_080B2B94(int);
extern void func_0800616C(int, int, int);
void func_080C07C4(void) {
    u8 *p = func_080B2B94(0);
    func_0800616C(((u32)p[35] << 26) >> 27, 0, 0);
}
