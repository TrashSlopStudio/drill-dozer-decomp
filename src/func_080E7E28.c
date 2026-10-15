#include "types.h"

extern u32 func_0806B864(u32 *);
extern void func_080E7ED4(u32);

u32 func_080E7E28(u32 *p) {
    if (func_0806B864(p) != 1) {
        func_080E7ED4(p[6]);
        p[2] = 0;
        p[0] = 9;
    }
    return 0;
}
