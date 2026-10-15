#include "types.h"

extern void func_0800CCA4(u32, u32, u32, u32, u32);
extern void func_080B024C(u32);

u32 func_0806AB98(u32 *p) {
    func_080B024C(p[1]);
    func_0800CCA4(p[0], 180, 255, 0, 0);
    return 1;
}
