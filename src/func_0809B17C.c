#include "types.h"

extern void func_080067CC(u32, u32 *);
extern void func_0807E98C(u32);

void func_0809B17C(u32 a, u32 *p) {
    func_080067CC(p[1], &p[2]);
    func_0807E98C(p[1]);
}
