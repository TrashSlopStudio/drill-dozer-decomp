#include "types.h"

extern void func_08075AAC(u8 *, u32 *);
extern void func_080119D0(u8 *, u32);
extern u32 func_080119D8(u8 *);

void func_08075B48(u8 *p) {
    u32 v;
    func_08075AAC(p, &v);
    func_080119D0(p, v);
    *(u32 *)(p + 0x21C) = func_080119D8(p);
}
