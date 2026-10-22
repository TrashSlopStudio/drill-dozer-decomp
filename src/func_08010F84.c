#include "types.h"

extern int func_0800B330(u32);
extern int func_0800B2A0(u32);

void func_08010F84(u32 *p) {
    int r;
    if (func_0800B330(p[12]) == 1) {
        r = 0;
    } else {
        r = func_0800B2A0(p[12]);
    }
    if (r == 1) {
        if (p[5] == 0) {
            p[5] = r;
            p[6] = r;
        }
    } else {
        p[5] = 0;
    }
}
