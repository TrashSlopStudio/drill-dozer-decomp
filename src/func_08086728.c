#include "types.h"
extern u8 *func_08086760();
extern void func_080067D8(u8 *, u8 *);
extern void func_08005B18(u8 *, u8 *);
extern u8 gUnk_0839EC4C[];
void func_08086728(int a, u8 **b) {
    *b = func_08086760();
    func_080067D8(*b, (u8 *)b + 16);
    (*b)[1] = ((u8 *)b)[15];
    func_08005B18(*b, gUnk_0839EC4C);
}
