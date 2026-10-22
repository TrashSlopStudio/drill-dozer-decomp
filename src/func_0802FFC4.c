#include "types.h"

extern int func_0802FF7C(int);
extern int func_0802FFA0(int);

int func_0802FFC4(int a) {
    int r5 = func_0802FF7C(a);
    int r = func_0802FFA0(a);
    if (r == -1) {
        return r5;
    }
    if (r5 == -1) {
        return r;
    }
    if (r == 0) {
        return r5 + 2;
    }
    return r5 + 4;
}
