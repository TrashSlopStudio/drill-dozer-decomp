#include "types.h"

struct S {
    u8 pad[0x23];
    u8 a : 1;
    u8 b : 5;
};

extern void func_08006ABC(u32);
extern void func_0801B064(struct S *);

void func_08076D88(u8 *p) {
    func_08006ABC((*(struct S **)(p + 0x7C))->b);
    func_0801B064(*(struct S **)(p + 0x7C));
}
