#include "types.h"

extern void func_080066B8(u32, u32);
extern void func_08005560(u32);

void func_0807C87C(u8 *p) {
    if (*(u32 *)(p + 4) != 0) {
        func_08005560(*(u32 *)(p + 4));
        func_080066B8(*(u16 *)(p + 2), 64);
    }
}
