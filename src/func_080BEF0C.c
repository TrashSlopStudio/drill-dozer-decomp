#include "types.h"

extern void func_08029E54(u32);

void func_080BEF0C(u32 a, u32 *p) {
    if (*p == 0) {
        *p = 110;
        func_08029E54(107);
    } else {
        *p -= 1;
    }
}
