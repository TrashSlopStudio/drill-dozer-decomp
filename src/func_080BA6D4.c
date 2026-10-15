#include "types.h"

struct S {
    u32 a;
    u32 b;
    u32 c;
};

u32 func_080BA6D4(struct S *p) {
    if (p->c == 0)
        return 1;
    p->c--;
    return 0;
}
