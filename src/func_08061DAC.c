#include "types.h"

struct S {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};

extern void func_08006ABC(u32);
extern void func_0801B064(struct S *);

void func_08061DAC(u32 unused, struct S **p) {
    func_08006ABC((*p)->b);
    func_0801B064(*p);
}
