#include "types.h"

extern int func_080F8708(int, int);
extern void func_08029E54(int);

void func_08060338(volatile u8 *p) {
    int r = func_080F8708(*p, 6);
    if (r == 0) {
        func_08029E54(11);
        *p = r;
    }
    *p += 1;
}
