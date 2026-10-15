#include "types.h"

extern u32 *gUnk_030042BC;
extern void func_080F8F84(void);
extern void func_080F8F9C(u32);

void func_080F8F24(void) {
    *gUnk_030042BC = 0;
    func_080F8F84();
    func_080F8F9C(0);
}
