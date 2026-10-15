#include "types.h"

extern void func_080244BC(u8 *, u8 *, u8 *);
extern void func_0802443C(u8 *, u32, u32);

void func_080250B4(u8 *p) {
    u8 *q = p + 0x7C;
    func_080244BC(p, q, p + 0x80);
    func_0802443C(p, *(u32 *)(p + 0x7C), *(u32 *)(q + 4));
}
