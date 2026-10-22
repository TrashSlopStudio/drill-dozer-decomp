#include "types.h"
extern void func_080066B8(u16 a, u16 b);
extern void func_08005560(void *p);
void func_08033650(u16 **pp) {
    u16 *p = *pp;
    if (p != 0) {
        func_080066B8(p[8], p[9]);
        func_08005560(*pp);
        *pp = 0;
    }
}
