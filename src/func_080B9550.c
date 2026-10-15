#include "types.h"
extern void func_080B95FC(void *, int, int);
void func_080B9550(u8 *p, u32 v) {
    p[93] = v;
    if ((u8)v) {
        p[94] = 0;
    } else {
        func_080B95FC(p, 0, 0);
    }
}
