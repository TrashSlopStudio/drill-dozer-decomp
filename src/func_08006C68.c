#include "types.h"

struct S {
    u8 pad[0x21];
    u8 lo : 2;
    u8 pad2;
    u8 a : 1;
    u8 b : 5;
};

extern void func_08006C48(u32 a);
extern void func_08006B4C(struct S *p);

void func_08006C68(struct S *p) {
    func_08006C48(p->b);
    p->lo = 0;
    func_08006B4C(p);
}
