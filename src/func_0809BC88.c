#include "types.h"

extern void func_0801BF48(u8 *, u32);
extern void func_0809BC00(u8 *);

void func_0809BC88(u8 *a) {
    u8 *p = a + 124;
    if (*(u32 *)(p + 24) != 0)
        func_0801BF48(p + 116, *(u32 *)(p + 24));
    func_0809BC00(a);
}
