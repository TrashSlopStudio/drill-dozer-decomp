#include "types.h"

extern void func_08019B44(u8 *);
extern void func_080C32B4(u8 *, u32);

void func_080B6ED0(u8 *a, u8 *b) {
    func_08019B44(a);
    func_080C32B4(b, 1);
}
