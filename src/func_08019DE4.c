#include "types.h"

extern void func_080199BC(void *, u8, u16);
extern void func_08019D08(void *);

void func_08019DE4(void *a, u8 b, u16 c) {
    func_080199BC(a, b, c);
    func_08019D08(a);
}
