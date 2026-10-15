#include "types.h"

extern void func_080262F0(u8 *p, u8 *q);
extern void func_08026384(u8 *p, u8 *q, u32 k);
extern void func_0802633C(u8 *p);

void func_080262CC(u8 *p) {
    u8 *q = p + 0x7C;

    func_080262F0(p, q);
    func_08026384(p, q, 1);
    func_0802633C(p);
}
