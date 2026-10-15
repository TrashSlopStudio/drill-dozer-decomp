#include "types.h"

extern void func_08005560(u32);

void func_0808FFAC(u32 a, u8 *b) {
    u32 *p = (u32 *)(b + 12);
    s32 i = 7;
    do {
        func_08005560(*p++);
    } while (--i >= 0);
    func_08005560(*(u32 *)(b + 8));
}
