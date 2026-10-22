#include "types.h"

extern void func_08018E94(u32 a, u32 b, u32 c);

void func_080086A4(u32 *p) {
    u8 *q;
    q = *(u8 **)(*p + 12);
    func_08018E94(*(u32 *)(q + 16), ((u32)q[30] << 28) >> 24, 0x1A0);
    q = *(u8 **)(*p + 12);
    func_08018E94(*(u32 *)(q + 20), ((u32)q[30] << 28) >> 24, 0x40);
}
