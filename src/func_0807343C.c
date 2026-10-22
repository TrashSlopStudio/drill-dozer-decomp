#include "types.h"

extern void *func_08001728(int);
extern void func_0800089C(void *, void *, int);
extern void func_08073468(void);

void func_0807343C(u32 a, u32 b, u32 c) {
    u8 *p = func_08001728(12);
    *(u32 *)p = a;
    *(u32 *)(p + 4) = b;
    p[9] = c;
    func_0800089C(func_08073468, p, 0x1801);
}
