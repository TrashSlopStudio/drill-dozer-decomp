#include "types.h"

struct S {
    u16 a;
    u8 b;
    u8 c;
};

extern int func_0800089C(void *, void *, int);
extern void func_080BA400(void);

void func_080BA3C4(struct S *p) {
    p->c = 0;
    p->b = 0;
    p->a = 0;
    func_0800089C(func_080BA400, p, 0x1801);
}
