#include "types.h"

extern void func_080F45E0(u8 *a);
extern void func_080F4630(u8 *a, s32 b);

void func_080F3EB0(u32 a, u8 *b) {
    s8 *p = (s8 *)(b + 0x39);
    if (*p != -1) {
        func_080F45E0(b);
        func_080F4630(b, *p);
    }
}
