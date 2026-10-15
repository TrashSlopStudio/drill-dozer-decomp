#include "types.h"

struct S {
    u16 a;
    u16 n;
    void *buf;
};

extern void func_08005560(void *);

void func_080E5894(struct S *s) {
    if (s->buf) {
        func_08005560(s->buf);
        s->buf = 0;
        s->n = 0;
    }
}
