#include "types.h"

extern void func_080066B8(int, int);
extern void func_08005560(u8 *);

void func_080CC0F0(u8 **p) {
    u8 *q = *p;
    if (q != 0) {
        func_080066B8(*(u16 *)(q + 16), *(u16 *)(q + 18));
        func_08005560(*p);
        *p = 0;
    }
}
