#include "types.h"

extern void func_080066B8(u32, u32);
extern void func_08005560(u8 *);

void func_08050058(u8 **p) {
    s32 i = 4;
    do {
        func_080066B8(*(u16 *)(*p + 16), *(u16 *)(*p + 18));
        func_08005560(*p++);
    } while (--i >= 0);
}
