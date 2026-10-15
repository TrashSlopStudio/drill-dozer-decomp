#include "types.h"

extern s8 func_0802D630(void);
extern void func_0802DD14(void);

s8 func_0802DCF4(void) {
    s8 r = func_0802D630();
    if (r != -2)
        func_0802DD14();
    return r;
}
