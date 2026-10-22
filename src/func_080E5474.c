#include "types.h"

extern int func_0800B728(u32 a, u32 b, u32 c);
extern void func_080E5430(u32 a);

u32 func_080E5474(u32 p) {
    u32 n = 0;
    int i;
    for (i = 0; i <= 30; i++) {
        if (func_0800B728(p, i, 2) == 1)
            n++;
    }
    func_080E5430(n);
}
