#include "types.h"
extern u32 *func_080B29D4(u32 *);
void func_080C0548(u32 *p) {
    u32 t;
    p[3] = 0;
    p[9] = 0;
    func_080B29D4(&t);
    p[18] = t;
}
