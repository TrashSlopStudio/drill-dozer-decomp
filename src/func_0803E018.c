#include "types.h"

struct A {
    u8 pad[0x10];
    u16 x;
    u16 y;
};

extern void func_080066B8(u16 x, u16 y);
extern void func_08005560(void *p);

void func_0803E018(u8 *p) {
    struct A **q = (struct A **)(p + 0x208);
    func_080066B8((*q)->x, (*q)->y);
    func_08005560(*q);
    func_08005560(*(void **)(p + 0x20C));
}
