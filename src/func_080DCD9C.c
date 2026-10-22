#include "types.h"
extern void func_080DD4C4(int, int);
extern void func_080DCDC0(void);
extern void func_0800089C(void *, void *, int);

void func_080DCD9C(int *p) {
    func_080DD4C4(p[3], 1);
    func_0800089C(func_080DCDC0, p, 0x1801);
}
