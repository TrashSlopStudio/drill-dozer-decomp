#include "types.h"
extern void func_080D3910(u8 *);
extern void func_080D5E0C(u8 *, u8 *);
extern void func_080D5D00(u8 *, u8 *);
void func_080D5F9C(u8 *a) {
    u8 *p = a + 0x7c;
    func_080D3910(a);
    if (*(int *)(p + 4) == 1)
        func_080D5E0C(a, p);
    else
        func_080D5D00(a, p);
}
