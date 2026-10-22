#include "types.h"
extern void func_0802B5C8();
int func_0802B634(int a, int b, int c, u8 d, int e, u8 *f) {
    if (d != 0 && d == *f)
        return 0;
    *f = d;
    func_0802B5C8(a, b, e, c);
    return 1;
}
