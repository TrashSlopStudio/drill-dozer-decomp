#include "types.h"

extern void func_08044D98(u8 *, s32, s8, u8 *);
extern void func_08044E30(u8 *);

void func_08043988(u8 *p) {
    u8 *q = p + 0x7C;
    func_08044D98(p, ((s8 *)q)[17], q[18], p + 0x84);
    func_08044E30(p + 0x84);
}
