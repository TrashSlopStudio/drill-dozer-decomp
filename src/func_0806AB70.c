#include "types.h"

extern void func_080B024C(u32);
extern void func_0800CCA4(u32, int, int, int, int);

int func_0806AB70(u32 *p) {
    func_080B024C(p[1]);
    func_0800CCA4(p[0], 179, 255, 0, 0);
    return 1;
}
