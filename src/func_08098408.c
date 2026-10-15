#include "types.h"

extern void func_0802E57C(u32, u32 *);
extern void func_080750A0(u32, u32);

void func_08098408(u8 *a) {
    u32 x[2];
    func_0802E57C(*(u32 *)(a + 12), x);
    func_080750A0(*(u32 *)(a + 12), 3);
}
