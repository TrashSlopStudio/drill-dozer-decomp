#include "types.h"
extern void func_080DA274();
extern void func_080DA384();
extern void func_080DA19C();
void func_080DA768(u8 *a, u16 *b) {
    u16 v;
    func_080DA274(a);
    v = *b;
    a[84] = v;
    a[119] = 5;
    func_080DA384(a);
    func_080DA19C();
}
