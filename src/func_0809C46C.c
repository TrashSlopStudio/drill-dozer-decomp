#include "types.h"

extern void func_0801B0B4(u8);
extern void func_0801B1C4(u8 *);

int func_0809C46C(u8 *p, u8 *q) {
    int ret;
    q += 0x70;
    *q += 1;
    if (*q <= 0x1f) {
        ret = 1;
    } else {
        func_0801B0B4(p[20]);
        func_0801B1C4(p);
        ret = 0;
    }
    return ret;
}
