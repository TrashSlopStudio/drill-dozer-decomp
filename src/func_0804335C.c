#include "types.h"

extern int func_0800B660(u32, int);
extern void func_0800B5D8(u32, int);
extern void func_08010E20(u32);
extern void func_080673E0(int);

void func_0804335C(u32 a) {
    if (func_0800B660(a, 105) == 1) {
        func_0800B5D8(a, 50);
    } else {
        func_08010E20(a);
        func_080673E0(1);
    }
}
