#include "types.h"

extern void func_080DD4C4(u32, u32);
extern void func_080DD370(void);
extern void func_0800089C(void (*)(void), u8 *, u32);

void func_080DD34C(u8 *p) {
    func_080DD4C4(*(u32 *)(p + 12), 1);
    func_0800089C(func_080DD370, p, 0x1801);
}
