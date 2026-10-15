#include "types.h"

extern s32 func_0804505C(void);
extern void func_0801AEF0(u32, u32);
extern s32 func_08044E30(u32 *);

s32 func_08044E08(u32 a, u32 *b) {
    s32 r;
    if (func_0804505C() != 1) {
        func_0801AEF0(a, *b);
        r = -1;
    } else {
        r = func_08044E30(b);
    }
    return r;
}
