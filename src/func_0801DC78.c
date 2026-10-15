#include "types.h"

extern u32 func_0800098C(u32);
extern void func_0801DC5C(u32);
extern void func_0800090C(u32);
extern void func_08001768(u32);
extern u32 gUnk_0203587C;

void func_0801DC78(u32 a) {
    u32 r = func_0800098C(a);
    func_0801DC5C(r);
    func_0800090C(a);
    func_08001768(r);
    gUnk_0203587C = 0;
}
