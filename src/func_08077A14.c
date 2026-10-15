#include "types.h"

extern void func_08077A3C(u8 *, u8 *);
extern void func_08077F6C(u8 *, u8 *, u32);
extern void func_08077FB8(u8 *, u8 *);

void func_08077A14(u8 *a) {
    u8 *b = a + 0x7C;
    func_08077A3C(a, b);
    func_08077F6C(a, b, 0);
    func_08077FB8(a, b);
}
