#include "types.h"

extern u32 func_080C0600(u32);
extern u32 func_080C0568(u32);
extern void func_0802A0B0(u32);

u32 func_080C0138(u32 *p) {
    u32 a = func_080C0600((u32)p);
    u32 b = func_080C0568((u32)p);
    if (a == 1 && b == 1) {
        func_0802A0B0(0xA8);
        *p = 0x2E;
    }
    return 0;
}
