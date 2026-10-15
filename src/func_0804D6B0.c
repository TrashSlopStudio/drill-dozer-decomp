#include "types.h"
extern void func_0801B064(int);
extern void func_0804E0F8(int);
void func_0804D6B0(int *a) {
    int *p = a + 31;
    func_0801B064(a[31]);
    func_0804E0F8(p[1]);
    func_0801B064(p[2]);
}
