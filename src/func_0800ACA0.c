#include "types.h"
extern s32 func_0800B220(u32);
extern void func_0800090C(u32);
extern s32 func_0800B234(u32, u32);
extern void func_0800ACD0(u32);
void func_0800ACA0(u32 a, u32 b) {
    if (func_0800B220(b) == 1) {
        func_0800090C(a);
    } else if (func_0800B234(b, 1) != 1) {
        func_0800ACD0(b);
    }
}
