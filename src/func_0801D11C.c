#include "types.h"

extern void func_08012710(u32, u8, u8 *);
extern void func_08055FB8(u32, u8 *);

void func_0801D11C(u8 *p) {
    u8 buf[12];
    func_08012710(*(u32 *)(p + 12), p[20], buf);
    func_08055FB8(*(u32 *)(p + 12), buf);
}
