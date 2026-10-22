#include "types.h"

extern void func_0802053C(u32, u32, u32, u8 *);
extern void func_08001B34(u32);

u32 func_08067250(u8 *p) {
    u32 r;
    if (*(u32 *)(p + 8) != 0) {
        r = 0;
    } else {
        func_0802053C(*(u32 *)p, p[13], p[14], p + 26);
        func_08001B34(p[13]);
        r = 1;
    }
    return r;
}
