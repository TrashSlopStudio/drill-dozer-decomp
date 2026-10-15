#include "types.h"

extern void func_0802FD6C(u8 *);
extern void func_08030154(u8 *);
extern void func_08011988(u8 *, u32, u32);

u32 func_080743C4(u8 *p) {
    func_0802FD6C(p);
    func_08030154(p);
    func_08011988(p, 4, 1);
    *(u32 *)(p + 0x48) = 2;
    return 1;
}
