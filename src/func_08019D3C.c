#include "types.h"

extern void func_08018E94(void *, u16, u32);
extern void func_08019C9C(u16, u16);

void func_08019D3C(void *a, u16 b, u16 c) {
    func_08018E94(a, b, c);
    func_08019C9C(b, c / 2);
}
