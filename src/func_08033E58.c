#include "types.h"

struct S {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};

extern void func_08006C48(u32);
extern void func_08033650(struct S **);

void func_08033E58(u8 *a) {
    struct S **p = (struct S **)(a + 252);
    func_08006C48((*p)->b);
    func_08033650(p);
}
