#include "types.h"

extern void func_080E66A8(u8 *, u8 *);
extern void func_080E6758(u8 *, u8 *);

void func_080E668C(u8 *p) {
    u8 *q = p + 0x7C;
    func_080E66A8(p, q);
    func_080E6758(p, q);
}
