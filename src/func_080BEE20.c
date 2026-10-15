#include "types.h"

extern void func_0800090C(u32);

void func_080BEE20(u32 *p) {
    if (*p != 0) {
        func_0800090C(*p);
        *p = 0;
    }
}
