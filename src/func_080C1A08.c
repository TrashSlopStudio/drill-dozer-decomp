#include "types.h"

struct S {
    u8 pad[16];
    u16 a;
    u16 b;
};

extern void func_080066B8(int, int);
extern void func_08005560(struct S *);

void func_080C1A08(struct S **pp) {
    if (*pp != 0) {
        func_080066B8((*pp)->a, (*pp)->b);
        func_08005560(*pp);
        *pp = 0;
    }
}
