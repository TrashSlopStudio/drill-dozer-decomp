#include "types.h"

struct S {
    u8 *p;
    u16 a;
    u16 c;
};

void func_080B6808(struct S *s) {
    if (s->c != 0 && s->p[1] == 0) {
        if (s->a == 0)
            s->p[1] = 1;
        else
            s->a--;
    }
}
