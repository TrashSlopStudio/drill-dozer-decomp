#include "types.h"

extern u32 func_08039DA4(u32 *);
extern void func_0800B35C(u32);
extern void func_0800090C(u32);

void func_0803A0A4(u32 a, u32 *b) {
    if (func_08039DA4(b) != 0) {
        func_0800B35C(*b);
        func_0800090C(a);
    }
}
