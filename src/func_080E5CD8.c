#include "types.h"
extern void func_080E653C(u8 *a, u8 *b, int c);
int func_080E5CD8(u8 *p) {
    u8 *q = p + 0x7c;
    if (q[29] == 1) {
        return 0;
    } else {
        q[29] = 1;
        func_080E653C(p, q, 6);
    }
    return 1;
}
