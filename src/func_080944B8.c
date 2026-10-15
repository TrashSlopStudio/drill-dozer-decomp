#include "types.h"

struct S080944B8 {
    u8 pad[16];
    u16 a, b;
};

extern void func_080066B8(u32, u32);
extern void func_08005560(struct S080944B8 *);

void func_080944B8(struct S080944B8 **pp) {
    if (*pp != 0) {
        func_080066B8((*pp)->a, (*pp)->b);
        func_08005560(*pp);
        *pp = 0;
    }
}
