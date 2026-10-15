#include "types.h"

extern void func_0801BF48(void *, int);
extern void func_080D66B0(void *, void *);
void func_080D65E8(u8 *p) {
    int *q = (int *)(p + 0x7c);
    func_0801BF48(p + 0x94, q[0]);
    func_0801BF48(p + 0x9c, q[1]);
    func_080D66B0(p, q);
}
