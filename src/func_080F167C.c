#include "types.h"

extern void func_08017780(u32);
extern void func_08017C24(u32, u32);
extern void func_080F14C8(u8 *, u32);

u32 func_080F167C(u8 *p, u32 b, u32 c, u32 d) {
    func_08017780(*(u32 *)(p + 36));
    func_08017C24(*(u32 *)(p + 36), 3);
    func_08017C24(*(u32 *)(p + 36), 4);
    func_080F14C8(p, d);
    return 1;
}
