#include "types.h"

extern void func_08044198(u8 *a, u8 *q, u8 n);
extern void func_080440B0(u8 *a, u8 *q);
extern void func_080442B4(u8 *a, u8 *q);

void func_08043FB8(u8 *a) {
    u8 *q = a + 124;
    func_08044198(a, q, q[18]);
    func_080440B0(a, q);
    func_080442B4(a, q);
}
