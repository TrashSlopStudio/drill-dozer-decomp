#include "types.h"

extern u32 func_080DBB5C(u32, u32);
extern void func_0800090C(u32);
extern void func_08001768(u32);

void func_080DBE58(u32 a, u32 b) {
    if (func_080DBB5C(a, b) == 0) {
        func_0800090C(a);
        func_08001768(b);
    }
}
