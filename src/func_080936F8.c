#include "types.h"

extern void func_080937B0(u32, int *);
extern void func_08093950(u32, int *);

u32 func_080936F8(u32 a, int *p) {
    func_080937B0(a, p);
    func_08093950(a, p);
    p[1] = 1;
    p[5] = 2;
    p[0] = 7;
    return 1;
}
