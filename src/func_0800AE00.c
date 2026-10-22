#include "types.h"
extern u32 func_0800B220(u8 *b);
extern void func_0800090C(u8 *a);
extern void func_080117BC(u8 *b, u8 *c);
void func_0800AE00(u8 *a, u8 *b) {
    if (func_0800B220(b) == 1) {
        func_0800090C(a);
    } else if (*(u32 *)(b + 68) != 0) {
        func_080117BC(b, b + 344);
    }
}
