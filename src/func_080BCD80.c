#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 c;
};

u32 func_080BCD80(struct S *p) {
    if (p->c == 0)
        return 1;
    p->c--;
    return 0;
}
