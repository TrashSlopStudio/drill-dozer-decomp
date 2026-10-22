#include "types.h"

extern void func_08005560(u32);
extern void func_080066B8(u16, u32);

void func_08098EE0(u8 *p) {
    u32 v = *(u32 *)(p + 0x5030);
    if (v != 0) {
        func_08005560(v);
        func_080066B8(*(u16 *)(p + 0x502E), 0x40);
    }
}
