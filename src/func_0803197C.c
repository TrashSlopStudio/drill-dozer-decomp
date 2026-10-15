#include "types.h"

extern void func_0802FD6C(u8 *);
extern void func_08011988(u8 *, u32, u32);

u32 func_0803197C(u8 *a) {
    func_0802FD6C(a);
    func_08011988(a, 1, 0);
    *(u32 *)(a + 0x74) = 0;
    *(u32 *)(a + 0x48) = 2;
    return 1;
}
