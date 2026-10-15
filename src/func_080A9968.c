#include "types.h"

extern void func_0800B6A8(u32, u32, s32);
extern void func_08044E64(u8 *);

void func_080A9968(u8 *p) {
    u8 *q = p + 0x7C;
    func_0800B6A8(*(u32 *)(p + 12), 0, *(s16 *)(q + 8));
    func_08044E64(p + 0x80);
}
