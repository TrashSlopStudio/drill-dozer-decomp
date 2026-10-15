#include "types.h"

extern u32 func_0803A0C8(u32 *);
extern void func_0800B35C(u32);
extern void func_0800090C(void *);

void func_0803A1E4(void *a, u32 *b) {
    if (func_0803A0C8(b)) {
        func_0800B35C(*b);
        func_0800090C(a);
    }
}
