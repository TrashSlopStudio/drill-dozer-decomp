#include "types.h"
extern u8 *func_080016E8(int);
extern void func_0800089C(void (*)(void), u8 *, int);
extern void func_080B143C(void);
void func_080B13D0(void) {
    u8 z = 0;
    u8 *p = func_080016E8(4);
    if (p) {
        *(u16 *)p = 0;
        p[2] = z;
        p[3] = z;
        func_0800089C(func_080B143C, p, 0x1801);
    }
}
