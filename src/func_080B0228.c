#include "types.h"

extern void func_080066B8(u32, u32);
extern void func_08005560(u8 *);

void func_080B0228(u8 **p) {
    if (*p != 0) {
        func_080066B8(*(u16 *)(*p + 0x10), *(u16 *)(*p + 0x12));
        func_08005560(*p);
        *p = 0;
    }
}
