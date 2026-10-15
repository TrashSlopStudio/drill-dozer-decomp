#include "types.h"

extern void func_080CA278(u8 *, u8 *);
extern void func_080CA248(u8 *, u8 *);

void func_080CA22C(u8 *p) {
    u8 *q = p + 0x7C;
    func_080CA278(p, q);
    func_080CA248(p, q);
}
