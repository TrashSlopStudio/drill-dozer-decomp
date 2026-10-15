#include "types.h"

extern void func_08011A20(u32, u32);
extern void func_080C0694(u32, u32);

u32 func_080BF594(u32 *p) {
    func_08011A20(p[29], 0);
    func_080C0694(p[29], 3);
    p[0] = 5;
    return 1;
}
