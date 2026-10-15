#include "types.h"

extern void func_080793C8(u8 *p, u8 v);
extern void func_0807CA50(u8);

void func_08078414(u32 a, u8 *p) {
    func_080793C8(p, p[1]);
    func_0807CA50(p[14]);
}
