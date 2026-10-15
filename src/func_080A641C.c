#include "types.h"

extern void func_080A65B4(u8 *, u8 *);
extern void func_08044E30(u8 *);
extern void func_080A67F8(u8 *);

void func_080A641C(u8 *a) {
    func_080A65B4(a, a + 0x7C);
    func_08044E30(a + 0x80);
    func_080A67F8(a);
}
