#include "types.h"

extern void func_080F128C(int);
extern void func_080F14C8(int, int);

u32 func_080F1EE4(int a, int b, int c, int d) {
    func_080F128C(c);
    func_080F14C8(a, d);
    return 1;
}
