#include "types.h"
extern void func_080067E4(int, void *);
extern void func_08012884(int);
extern void func_08006ABC(int);

void func_080A73E4(u8 *p) {
    u8 *q = p + 0x7C;
    *(int *)q = 0;
    func_080067E4(q[4], p + 0xAC);
    func_08012884(0xAF);
    func_08006ABC(q[4]);
}
