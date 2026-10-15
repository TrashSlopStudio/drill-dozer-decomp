#include "types.h"

extern void func_080066B8(u16, u16);
extern void func_08005560(void *);

void func_080B06C8(u16 **p) {
    u16 *q = *p;
    if (q != 0) {
        func_080066B8(q[8], q[9]);
        func_08005560(*p);
        *p = 0;
    }
}
