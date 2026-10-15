#include "types.h"

extern void *func_0800098C(void *);
extern void func_080664BC(u32);
extern void func_080097A0(void *);

void func_08066560(void *a) {
    u32 *p = func_0800098C(a);
    func_080664BC(p[1]);
    func_080664BC(p[2]);
    func_080097A0(a);
}
